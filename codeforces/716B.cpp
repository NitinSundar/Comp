#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define inf 10000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e6 + 5;
int a[26];
int main()
{
    IOS
    string s;
    cin>>s;
    //cout<<s.size()<<endl;
    int c = 0;
    if(s.size() < 26)
    {
        cout<<"-1";
    }
    else
    {
        for(int i=0;i<26;i++)
        {
            if(s[i] == '?')
            {
                c++;
                continue;
            }
            a[s[i]-'A']++;
        }
        int ind = -1;
        int temp = 0, temp1 = 0;
        for(int j = 0;j<26;j++)
        {
            if(a[j] == 0)
                temp++;
            else if(a[j] > 1)
                temp1++;
        }
        if(temp1 == 0 && temp == c)
        {
            ind = 0; 
        }
        temp =0;
        temp1 = 0;
        for(int i=26;i<s.size();i++)
        {
            if(s[i] == '?')
                c++;
            else
                a[s[i]-'A']++;
            if(s[i-26] == '?')
                c--;
            else
                a[s[i-26]-'A']--;
            int temp = 0, temp1 = 0;
            
            for(int j=0;j<26;j++)
            {
                if(a[j] == 0)
                    temp++;
                else if(a[j] == 1)
                    temp1++;
            }
           // cout<<i-26+1<<" "<<c<<" "<<temp<<" "<<temp1<<endl;
            if(temp1 + temp == 26)
            {
                ind = i-26+1;
                break;
            }
            
        }
        if(ind == -1)
            cout<<"-1";
        else
        {
            for(int i = ind;i<ind + 26 ;i++)
            {
                if(s[i] == '?')
                {
                    for(int j=0;j<26;j++)
                    {
                        if(a[j] == 0)
                        {
                            s[i] = (char)('A' + j);
                            a[j] = 1;
                            break;
                        }
                    }
                }
            }
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='?')
                    cout<<"A";
                else cout<<s[i];
            }
        }
        
    }
    return 0;

}