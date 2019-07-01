#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli s ,c;
priority_queue<long long, vector<long long>, greater<long long> > pq;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++)
	{
		lli x;
		cin>>x;
		pq.push(a[i]+s);
		cout<<pq.top()<<" ";
		for(c=0;!pq.empty() && pq.top()-x<=s;)
		{
			c+=pq.top()-s;
			pq.pop();
		}
		s+=x;
		c+=((lli)pq.size())*x;
		//cout<<c<<" "; 
	}
	return 0;
}