#include<bits/stdc++.h>
using namespace std;
int T=1;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    int k=2*n;
    int a[k];

    int ans=1e9;
    for(int i=0;i<k;i++) cin>>a[i];
    sort(a,a+k);
    for(int i=0;i<k;i++){
        for(int j=i+1;j<k;j++){
                vector <int> v;
            for(int l=0;l<k;l++){
                if(l!=i && l!=j) v.push_back(a[l]);
            }
            int c=0;
            for(int l=0;l<k-2;l+=2){
                c+=abs(v[l+1]-v[l]);
            }
            ans=min(ans,c);
        }
    }
    cout<<ans;
    return 0;
}
