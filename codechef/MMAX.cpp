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
    int T;
    cin>>T;
    while(T--){
        lli n;
        string s;
        cin>>n;
        cin>>s;
        lli k = 0 , cur = 1;
        for(int i=s.size()-1;i>=0;i--){
            k = k + (s[i]-'0')*cur;
            k%=n;
            cur=cur*10;
            cur%=n;
        }
       // cout<<k;
        vector<int> v(n,0);
        for(int i=0;i<n;i+=2){
            if(k){
                v[i] = 1;
                k--;
            }
        }
        for(int i=1;i<n;i+=2){
            if(k){
                v[i] = 1;
                k--;
            }
        }
        int ans=0;
        for(int i=1;i<n;i++)
            ans+=abs((v[i]-v[i-1]));
        cout<<ans<<endl;
    }
    return 0;
}


