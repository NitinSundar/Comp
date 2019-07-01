#include<iostream>
using namespace std;
typedef long long int lli;
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        lli minsal[n];
        lli ans=0;
        for(int i=0;i<n;i++) cin>>minsal[i];
        lli offrdsal[m],maxjob[m];
        int temp1[n]={0},temp2[m]={0};
        for(int i=0;i<m;i++) cin>>offrdsal[i]>>maxjob[i];
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            int ind=-1;
            lli mx=-1;
            for(int j=0;j<m;j++){
                if(s[j]=='1' && offrdsal[j]>=minsal[i] && maxjob[j]>0){
                    if(mx<offrdsal[j])
                    {
                        mx=offrdsal[j];
                        ind=j;
                    }

                }

            }
            if(ind!=-1){
                temp2[ind]=1;
                temp1[i]=1;
                ans+=offrdsal[ind];
                maxjob[ind]--;
            }
        }
        lli a=0,b=0;
        for(int i=0;i<n;i++) if(temp1[i]) a++;
        for(int i=0;i<m;i++) if(!temp2[i]) b++;
        cout<<a<<' '<<ans<<' '<<b<<endl;
    }
    return 0;
}
