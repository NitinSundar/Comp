#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define inf 10000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 3e3 + 5;

int main()
{
    IOS
    int Q;
    cin>>Q;
    while(Q--){
        lli n,f=0;
        cin>>n;
        pair<double,int> a[n];
        double s=0;
        double nd = (double)n , nd1 = nd - 1.0; 
        for(int i=0;i<n;i++){
            cin>>a[i].first;
            a[i].second = i;
            s+=a[i].first;
        }
        sort(a,a+n);
        double cur = s/nd;
        for(int i=0;i<n;i++){
            if((s - a[i].first)/nd1 == cur){
                f=1;
                cout<<a[i].second + 1<<endl;
                break;
            }
        }
        if(!f) cout<<"Impossible\n";
        
    }
    return 0;
}


