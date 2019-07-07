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
int sod(int x){
    int s = 0;
    while(x>0){
        s=s+(x%10);
        x=x/10;
    }
    return s;
}
int main()
{
    IOS
    int n;
    cin>>n;
    int s = sod(n);
    while(s%4 != 0){
        n++;
        s=sod(n);
    }
    cout<<n;
    return 0;
}


