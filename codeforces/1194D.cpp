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


int main()
{
    IOS
    int t;
    cin>>t;
    while(t--){
        lli n,k;
        cin>>n>>k;
        bool win = true;
        if(k%3 == 0)
        {
            int np = n%(k+1);
            if(np%3 == 0 && np!= k)
                win = false;
        }
        else
        {
            if(n%3 == 0)
                win = false;
        }
        cout<<(win?"Alice":"Bob")<<endl;
    }
    
    
    return 0;
}


