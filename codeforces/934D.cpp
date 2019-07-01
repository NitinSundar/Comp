#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    lli p,k;
    cin>>p>>k;
    vector<int> ans;
    while(p!=0)
    {
    	lli x = p%k;
    	if(x<0) x+=k;
    	ans.push_back(x%k);
    	p-=x%k;
    	p=p/(-k);
    }
    cout<<ans.size()<<endl;
    for(auto i:ans) cout<<i<<" ";
    return 0;
}