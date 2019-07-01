#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    lli ans1 =1e18,ans2;
    int n,m;
    cin>>n>>m;
    lli a[n],b[m];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    for(int i=0;i<n;i++)
    {
        ans2 = -1e18;
        for(int j=0;j<n;j++)
        {
            if(j == i) continue;
            for(int k=0;k<m;k++)
            {
                lli p =a[j]*b[k];
                ans2 = max(ans2,p);
            }
        }
        ans1 = min(ans1,ans2);
    }
    cout<<ans1;
    return 0;
}