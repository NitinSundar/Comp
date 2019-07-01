#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);  
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s[n];
        for(int i=0;i<n;i++)
            cin>>s[i];
        int ans[n][m];
        int f = 0;
        memset(ans,-1,sizeof(ans));
        
        map<int,int> r,c;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(s[i][j]=='1')
                {
                    f=1;
                    ans[i][j]=0;
                    r[i] = 1;
                    c[j] = 1;
                }
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(f == 0)
                {
                    cout<<"-1 ";

                }
                else if(ans[i][j]==0)
                {
                    cout<<"0 ";
                }
                else if(r[i] == 1 || c[j] == 1)
                {
                    cout<<"1 ";
                }
                else cout<<"2 ";
            }
            cout<<"\n";
        }

        
    }
    return 0;
}