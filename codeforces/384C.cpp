#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
    cin>>n;
    int q,ans=0,s=0;
    for(int i=1;i<=n;i++)
    {
    	cin>>q;
    	if(q==0) ans+=s;
    	else ++s;
    }
    cout<<ans;
}