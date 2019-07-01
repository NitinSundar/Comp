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
const int N = 2e5 + 5;
bool comp(int a,int b)
{
    return (a%10 > b%10);
}
int main()
{
    IOS
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n,comp);
    for(int i=0;i<n;i++)
    {
        int x = 9-(a[i]%10);
        x++;
        if(a[i] == 100) continue;
        if(k>=x)
        {
            a[i] = a[i] + x;
            k=k-x;
        }
        if(k == 0)
            break;
    }
    sort(a,a+n);
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        while(a[i] < 100 && k>9)
        {
            if( k > 9) {a[i]+=10;k-=10;}
        }
        ans = ans + a[i]/10;
    }
    cout<<ans;
    return 0;

}