#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back

#define mod 1000000007
#define inf 10000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 2e3 + 5;

int main()
{
    IOS
    int n,s;
    cin>>n>>s;
    int l[n],r[n],L = 0,R = 0;
    for(int i=0;i<n;i++){
        cin>>l[i]>>r[i];
        L+=l[i];
        R+=r[i];
    }
    if(!(L<=s && s<=R))
        cout<<"NO";
    else
    {
        s = s - L;
        for(int i=0;i<n;i++)
        {
            if(s == 0)
                break;
            for(int j = l[i]+1;j<=r[i];j++)
            {
                s--;
                l[i]++;
                if(s == 0)
                    break;
            }    
        }
        cout<<"YES\n";
        for(int i=0;i<n;i++) cout<<l[i]<<" ";
    }

    return 0;

}