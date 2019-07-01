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
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i] == b[i])
            continue;
        else if(a[i]!=b[i])
        {
            if(i+1 == n)
            {
                ans++;
                continue;
            } 
            else
            {
                if(a[i+1] != b[i+1] && a[i]!=a[i+1])
                {
                    ans++;
                    i++;
                }
                else
                {
                    ans++;
                }
            }
        }
    }
    cout<<ans;
    return 0;
}