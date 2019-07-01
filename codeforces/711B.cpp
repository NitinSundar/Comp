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
int main()
{
    IOS
    int n;
    cin>>n;
    lli a[n][n];
    int k,l;
    if(n == 1)
    {
        cout<<"1";
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            if(a[i][j] == 0)
            {
                k = i;
                l = j;
            }
        }
    }
    lli val = -1;
    for(int i=0;val==-1 && i<n;i++)
    {
        lli s = 0,flag = 0;
        for(int j=0;j<n;j++)
        {
            if(a[i][j] == 0)
                flag = 1;
            s = s + a[i][j];
        }
        if(!flag)
            val = s;
    }
    lli x = 0,y=0;
    for(int j=0;j<n;j++)
        y = y + a[k][j];
    x = val- y;
    a[k][l] = x;
    int flag = 1;
    for(int i=0;i<n;i++)
    {
        lli s = 0;
        for(int j=0;j<n;j++)
            s = s+a[i][j];
        if(s != val)
            flag = 0;
    }
    for(int i=0;i<n;i++)
    {
        lli s = 0;
        for(int j=0;j<n;j++)
            s = s+a[j][i];
        if(s != val)
            flag = 0;
    } 
    lli s = 0;
    for(int i=0;i<n;s= s+a[i][i],i++);
    if(s!=val) flag = 0;
    s=0;
    for(int i=0;i<n;s=s+a[i][n-i-1],i++);
    if(s!=val) flag = 0;
    if(flag && x>0)
        cout<<x;
    else
        cout<<"-1";
    return 0;

}