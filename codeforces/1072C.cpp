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

int main()
{
    IOS
    lli a,b;
    cin>>a>>b;
    lli x = a+b;
    lli end=0;
    for(lli i = 1;;i++)
    {
        lli k = (i*(i+1))/2;
        if(k<=x)
            end = i;
        else
            break;
    }
    vector<lli> v1,v2;
    for(lli i = end;i>=1;i--)
    {
        if(a-i>=0)
        {
            v1.pb(i);
            a-=i;
        }
        else
        {
            v2.pb(i);
            b-=i;
        }
    }
    cout<<v1.size()<<endl;
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
    cout<<endl;
    cout<<v2.size()<<endl;
    for(int i=0;i<v2.size();i++)
        cout<<v2[i]<<" ";
    return 0;
}    