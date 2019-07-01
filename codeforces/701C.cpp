#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define inf 10000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e5 + 5;

int main()
{
    IOS
    map<char,int> h,temp;
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans = n+1,l=0,r=1,cur=1;
    for(int i=0;i<n;i++)
        h[s[i]]++;
    temp[s[0]]++;
    int count = h.size();
    while( r<n)
    {
        while(r<n && temp.size() < count)
        {
            temp[s[r]]++;
            r++;
        }
        while(temp.size() == count)
        {
            ans = min(ans,r-l);
            char ch = s[l];
            temp[ch]--;
            if(temp[ch] == 0)
                temp.erase(ch);
            l++;
        }
        //cout<<l<<" "<<r<<endl;
    }
    while(l<n)
    {
        while(temp.size() == count)
        {
           ans = min(ans,r-l);
            char ch = s[l];
            temp[ch]--;
            if(temp[ch] == 0)
                temp.erase(ch);
            l++;
        }
        break;
    }
    cout<<ans;
    return 0;

}