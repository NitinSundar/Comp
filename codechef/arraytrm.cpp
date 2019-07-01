#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    IOS
    int T;
    cin>>T;
    while(T--)
    {
        int n,k;
        cin>>n>>k;
        k++;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int r1 = a[0]%k,c = 0;
        for(int i=1;i<n;i++)
        {
            if((a[i]%k) == r1)
                c++;
        }
        if(c >= n-2)
        {
            cout<<"YES\n";
            continue;
        }
        c = 0;
        r1 = a[1]%k;
        for(int i=0;i<n;i++)
        {
            if(i == 1) continue;
            if(r1 == (a[i]%k))
                c++;
        }
        if(c >= n-2)
        {
            cout<<"YES\n";
            continue;
        }
        cout<<"NO\n";
    }
    return 0;
}