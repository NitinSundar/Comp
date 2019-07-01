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
const int N = 1e3 + 5;
char a[10][N];
int main()
{
    IOS
    int n,k;
    cin>>n>>k;
    for(int i=1;i<10;i++)
        for(int j=1;j<=n;j++)
            a[i][j] = '.';
    for(int i=2;i<=3;i++)
    {
        for(int j=2,p=n-1;j<p;j++,p--)
        {
            if(k >= 2)
            {
                k-=2;
                a[i][j] = '#';
                a[i][p] = '#';
            }
        }
    }
    for(int i=2;i<=3;i++)
    {
        if(k)
        {
            k--;
            a[i][n/2 + 1 ] = '#';
        }
    }
    if(k != 0) cout<<"NO";
    else
    {
        cout<<"YES\n";
        for(int i=1;i<=4;i++,cout<<endl)
            for(int j=1;j<=n;j++)
                cout<<a[i][j];
    }    

    return 0;
}  