/*#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int N=1e6;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,x;
    cin>>n>>x;
    if(n==1){
        cout<<"YES\n"<<x;
        return 0;
    }
    if(n==2){
        if(x==0){
            cout<<"NO";
        }
        else{
            cout<<"YES\n";
            cout<<"0"<<" "<<x;
        }
        return 0;
    }
    srand(time(NULL));
    while(1.0*clock()/CLOCKS_PER_SEC < 1.8){
        vector <int> ver;
        for(int i=0;i<1000001;i++) ver.push_back(i);
        random_shuffle(ver.begin(),ver.end());
        int ans=x;
        for(int i=0;i<n-1;i++) ans=ans^ver[i];
        bool flag=false;
        for(int i=0;i<n-1;i++){
            if(ans==ver[i]){
                flag=true;
                break;
            }
        }
        if(ans>N || flag) continue;
        cout<<"YES\n";
        for(int i=0;i<n-1;i++) cout<<ver[i]<<' ';
        cout<<ans;
        return 0;
    }
    cout<<"NO\n";
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    if(n==1) cout<<"YES\n"<<x;
    else if(n==2){
        if(x==0) cout<<"NO\n";
        else cout<<"YES\n0 "<<x;
    }
    else{
            cout<<"YES\n";
        int t=0;
        for(int i=1;i<=n-3;i++){
            cout<<i<<' ';
            t=t^i;
        }
        const int pw1=(1<<17);
        const int pw2=(1<<18);
    if(t==x){
        cout<<(pw1+pw2)<<' '<<pw1<<' '<<pw2;
    }
    else{
        cout<<pw1<<' '<<((t^x)^pw1)<<" 0";
    }
    }
    return 0;
}
