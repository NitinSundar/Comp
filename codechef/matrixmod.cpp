/*#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,q;
    cin>>n>>q;
    int b[n][n];
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>b[i][j];
    int ans[n]={0};
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(i==0) ans[j]=-1*b[i][j];
            else{
                if(abs(ans[j]-ans[i])==b[i][j]) continue;
                else{
                    ans[j]=-1*ans[j];
                }
            }
        }
    }
    for(int i=0;i<n;i++) cout<<ans[i]<<' ';
    cout<<"\n";
    while(q--){
        int p;cin>>p;
        p--;
        int temp[n];
        for(int i=0;i<n;i++) cin>>temp[i];
        for(int i=0;i<n;i++){
            b[i][p]=temp[i];
            b[p][i]=temp[i];
        }
        for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(i==0) ans[j]=-1*b[i][j];
            else{
                if(abs(ans[j]-ans[i])==b[i][j]) continue;
                else{
                    ans[j]=-1*ans[j];
                }
            }
        }
    }
    for(int i=0;i<n;i++) cout<<ans[i]<<' ';
    cout<<"\n";
    }
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,q;
    cin>>n>>q;
    int b[n][n];
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>b[i][j];
    int y,ans[n]={0};
    for(int i=0;i<n;i++) if(b[0][i]!=0){y=i;break;}
    for(int i=0;i<n;i++){
        int f=-1;
        if(i>1) if(b[0][i]+b[0][y]==b[i][y]) f=1;
        cout<<f*b[0][i]<<' ';
    }
    cout<<"\n";
    while(q--)
    {
        int p;cin>>p;
        p--;
        int temp[n];
        for(int i=0;i<n;i++) cin>>temp[i];
        for(int i=0;i<n;i++){
            b[i][p]=temp[i];
            b[p][i]=temp[i];
        }
        for(int i=0;i<n;i++) if(b[0][i]!=0){y=i;break;}
        for(int i=0;i<n;i++){
        int f=-1;
        if(i>1) if(b[0][i]+b[0][y]==b[i][y]) f=1;
        cout<<f*b[0][i]<<' ';
    }
    cout<<"\n";
    }

    return 0;
}
