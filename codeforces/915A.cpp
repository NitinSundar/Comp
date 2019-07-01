#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    int n,k;
    cin>>n>>k;
    int ans=1e9;
    while(n--)
    {
        int x;
        cin>>x;
        if(k%x == 0) ans=min(ans,k/x);
    }
    cout<<ans;
	return 0;
}

