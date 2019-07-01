#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        lli n,d,s=0;
        cin>>n>>d;
        lli a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            s=s+a[i];
        }
        if(s%n!=0){
            cout<<"-1\n";
            continue;
        }
        else{
            bool flag=true;
            lli ans=0;
                lli k=(s/n);
            for(lli i=0;i<d;i++){
                bool flag1=true;
                lli temp=0,c=0;
                for(lli j=i;j<n;j+=d){
                    temp=temp+a[j];
                    c++;
                }
                if( (c*k) != temp) {flag=false;break;}
            }
            if(flag){
                for(lli i=0;i<d;i++){
                    lli prev=0;
                    for(lli j=i;j<n;j+=d){
                        a[j]=a[j]+prev;
                        prev=a[j]-k;
                        a[j]=a[j]-prev;
                        ans+=abs(prev);
                    }
                }
            }
            if(flag) cout<<ans<<"\n";
            else cout<<"-1\n";
        }
    }
    return 0;
}
