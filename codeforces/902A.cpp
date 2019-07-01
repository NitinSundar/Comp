#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	lli n,m;
   cin>>n>>m;
   vector<pair<lli,lli> >v(n);
   for(int i=0;i<n;i++)
   cin>>v[i].first>>v[i].second;
   bool vis[1000];
   memset(vis,false,sizeof(vis));
   lli p=0;
   for(lli i=0;i<n;i++)
   {
   	if(i==0&&v[i].first!=0)
   	{
   		cout<<"No";
   		return 0;
   	}
   	if(p<v[i].first)
   	{
   		cout<<"No";
   		return 0;
   	}
   	p=max(p,v[i].second);

   }
   if(p<m)
   	cout<<"No";
   else
   cout<<"YES";
    return 0;
}


