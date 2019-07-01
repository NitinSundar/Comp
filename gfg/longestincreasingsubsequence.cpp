#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main() 
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int a[n+2];
        a[0] = -1;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        int lis[n+1][n+1];
        for(int i = 0;i<=n;i++)
            lis[i][n+1]=0;
        for(int j=n;j>=1;j--)
        {
            for(int i=0;i<=j-1;i++)
            {
                if(a[i]>=a[j])
                    lis[i][j] = lis[i][j+1];
                else
                    lis[i][j] = max(lis[i][j+1],a[i]+lis[j][j+1]);
            }
        }
        cout<<lis[0][1]<<"\n";
    }
    
    return 0;
}