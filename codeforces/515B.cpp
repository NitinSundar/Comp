#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
//#define mp make_pair
#define mod 1000000007
#define inf 10000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e5 + 1e4;
int a[N],b[N];
int main()
{
    IOS
    int n,m;
    cin>>n>>m;
    int j;
    cin>>j;
    int s = 0;
    s+=j;
    while(j--)
    {
        int k;cin>>k;
        a[k]++;
    }
    cin>>j;
    s+=j;
    while(j--)
    {
        int k;
        cin>>k;
        b[k]++;
    }
    while(j < 2*n*m)
    {
        if(a[j%n] + b[j%m] == 1)
        {
            s++;
            a[j%n] = b[j%m] = 1;
        }   
        j++;
    }
    if(s >= n+m)
        cout<<"Yes";
    else
        cout<<"No";

    return 0;

}
