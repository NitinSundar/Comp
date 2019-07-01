#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define mod 1000000007
int tree[4*(1<<17)];

void build(int a[],int v,int l,int r)
{
	if(l == r)
	{
		tree[v] = a[l];
		return;
	}
	int mid = l + (r-l)/2;
	build(a,2*v,l,mid);
	build(a,2*v + 1,mid+1,r);
	int f = (int)log2(r-l+1);
	if(f%2)
		tree[v] = tree[2*v]|tree[2*v + 1];
	else 
		tree[v] = tree[2*v]^tree[2*v + 1];
}

void update(int v,int l,int r,int x,int y)
{
	if(x<l || x>r)
		return;
	if(l == r)
	{
		tree[v] = y;
		return ;
	}
	int mid = l + (r-l)/2;
	update(2*v,l,mid,x,y);
	update(2*v + 1,mid+1,r,x,y);
	int f = (int)log2(r-l+1);
	if(f%2)
		tree[v] = tree[2*v]|tree[2*v + 1];
	else 
		tree[v] = tree[2*v]^tree[2*v + 1];
}

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n,m;
	cin>>n>>m;
	int a[1<<n];
	for(int i=0;i<(1<<n);i++)
		cin>>a[i];
	build(a,1,0,(1<<n)-1);
	while(m--)
	{
		int p,b;
		cin>>p>>b;
		p--;
		update(1,0,(1<<n)-1,p,b);
		cout<<tree[1]<<"\n";
	}
	return 0;
}