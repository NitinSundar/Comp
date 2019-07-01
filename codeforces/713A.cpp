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
const int N = 1e6 + 5;
map<string,int> h;
string pad(string t)
{
    string s;
    int n = t.size();
    n = 18-n;
    for(int i=0;i<n;i++)
        s=s+"0";
    s=s+t;
    return s;
}
int main()
{
    IOS
    int t;
    cin>>t;
    while(t--)
    {
        char ch;
        cin>>ch;
        string x;
        cin>>x;
        if(ch == '?')
        {
            x = pad(x);
            cout<<h[x]<<endl;
            continue;
        }
        for(int i=0;i<x.size();i++)
        {
            if((x[i]-'0')%2)
                x[i] = '1';
            else
                x[i] = '0';
        }
        x = pad(x);
        if(ch == '+') h[x]++;
        else h[x]--;
        //cout<<x<<endl;
    }   
    return 0;

}