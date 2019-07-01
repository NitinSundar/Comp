#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int T=1;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    lli a,b,f,k;
    cin>>a>>b>>f>>k;
    int right=1;
    int ans=0;
    lli y=b;
    b=b-f;
    lli turns=k-1;
    while(turns--){
        if(right){
            if(b < 2ll*(a-f)){
                ans++;
                b=y;
            }
            b=b- (2ll*(a-f));
            right=1-right;
        }
        else{
            if(b < 2ll*f){
                ans++;
                b=y;
            }
            b=b- (2ll*f);
            right=1-right;
        }
        if(b<0){
            cout<<"-1";
            return 0;
        }
    }
    if(k%2){
        if(b < a-f) {
            ans++;
            b=y;
        }
        b=b-(a-f);
    }
    else{
        if(b<f) {ans++;b=y;}
        b=b-f;
    }
    if(b<0){
            cout<<"-1";
            return 0;
        }
    cout<<ans;
    return 0;
}
