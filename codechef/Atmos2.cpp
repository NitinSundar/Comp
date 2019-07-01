#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli m=1e9+7;
lli gcd(long long int a,long long int b)
{
    if (b==0)
        return a;
    return gcd(b, a%b);
}
lli poww(lli x,lli y,lli M)
{
	if(y==0) return 1;
	lli p=poww(x,y/2,M);
	p=(p%M*p%M)%M;
	if(y%2) return (p%M*x%M)%M;
	else return p%M;
}
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		vector <long long int> v[n+1];
		for(long long int i=0;i<n;i++){
			long long int x;
			cin>>x;
			v[i+1].push_back(x);
			

		}
		vector <long long int> a;
		long long int vis[n+1]={0};
		for(long long int i=1;i<=n;i++)
		{
			if(vis[i]==0)
			{
				queue<long long int> q;
				long long int c=0;
				q.push(i);
				vis[i]=1;
				while(!q.empty())
				{
					long long int x=q.front();
					//cout<<x;
					c++;
					q.pop();
					for(long long int i=0;i<v[x].size();i++)
					{
						if(vis[v[x][i]]==0){
							q.push(v[x][i]);
							vis[v[x][i]]=1;
						}
					}	
				}
				a.push_back(c);
			}
		}
		long long int ans=a[0];
		for(long long int i=1;i<a.size();i++)
		{
			lli p=(a[i]%m*ans%m)%m ;
			lli q=poww(gcd(a[i],ans),m-2,m);
			ans=(p%m*q%m)%m;
		}
		cout<<ans<<endl;
	}
	return 0;
}