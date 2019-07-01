#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int ans=1e8;
lli d;
void build(int node, int start, int end,lli tree[],lli a[])
{
    if(start == end)
    {
        tree[node] = a[start];
    }
    else
    {
        int mid = (start + end) / 2;
        build(2*node, start, mid,tree,a);
        build(2*node+1, mid+1, end,tree,a);
        tree[node] = tree[2*node] + tree[2*node+1];
    }
}
lli func(int node,int l,int r,int tree[])
{
   if(l==r)
   {
      if(tree[node] >= d) ans=min(ans,1);
   }
   
}
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
   cin>>t;
   while(t--)
   {
      int n; cin>>n;
       cin>>d;
      lli a[n+1];
      int f=3*n;
      lli tree[f];

      for(int i=1;i<=n;i++) cin>>a[i];
      build(1,1,n,tree,a);   
      for(int i=1;i<=2*n + 1 ;i++) cout<<tree[i]<<' ';
      func(1,1,n,tree);
      if(ans==1e8)cout<<"-1"<<endl;
      else cout<<ans<<endl;
      ans=1e8;

   }   
   return 0;
}


