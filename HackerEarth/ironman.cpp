#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        lli n,k;
        cin>>n>>k;
        lli max_so_far=-1e9,c=0;
        for(int i=0;i<n;i++){
            lli h;cin>>h;
            if(h<=k){
                c+=h;
                max_so_far=max(max_so_far,c);
            }
            else{
                c=0;
            }
        }
        cout<<max_so_far<<"\n";
    }
    return 0;
}
