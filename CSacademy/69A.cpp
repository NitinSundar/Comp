#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int ans[105],a[105];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
    int pr=1;
    for(int i=2;i<=n;i++)
    {
        if(a[pr] > a[i])
        {
            ans[pr]++;
        }
        else
        {
            ans[i]++;
            pr=i;
        }
    }
    for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
	return 0;
}