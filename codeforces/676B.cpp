#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 2e5 + 5;
int n,t;
int a[100][100];
int main()
{
    IOS
    cin>>n>>t;
    while(t--)
    {
        a[1][1]+=2048;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                if(a[i][j] > 2048)
                {
                    a[i+1][j] +=(a[i][j]-2048)/2;
                    a[i+1][j+1]+=(a[i][j]-2048)/2;
                    a[i][j] = 2048; 
                }
            }
        }
    }
    int ans = 0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=i;j++)
            ans+=(a[i][j] == 2048);
    cout<<ans;    
    return 0;
}