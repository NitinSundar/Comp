#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define inf 10000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e5 + 5;
int a[N];
int tree[N+N];
void build(int node,int l,int r)
{
    if(l == r)
    {
        tree[node] = a[l];
        //return a[l];
    }
    else
    {
        int mid = (l+r)/2;
        build(2*node,l,mid);
        build(2*node + 1 , mid+1 , r);
        tree[node] = min(tree[2*node],tree[2*node + 1]);
    }
}
int query(int node,int l,int r,int start,int end)
{
    if(r<start || l>end)
    {
        return 1e8;
    }
    else if(l<=start && r>=end)
    {
        return tree[node];
    }
    int m = (start+end)/2;
    int p1 = query(2*node,l,r,start,m);
    int p2 = query(2*node + 1,l,r,m+1,end);
    return min(p1,p2);
}
void update(int node,int idx,int val,int l,int r)
{
    if(l == r)
    {
        tree[node] = val;
    }
    else
    {
        int m = (l+r)/2;
        if(l<=idx && idx<=m) update(2*node,idx,val,l,m);
        if(m < idx && idx<=r)update(2*node + 1,idx,val,m+1,r);
        tree[node] = min(tree[2*node],tree[2*node + 1]);
    }
}
int main()
{
    IOS
    int n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    build(1,1,n); 
    while(q--)
    {
        string s;
        int l,r;
        cin>>s>>l>>r;
        if(s == "q")
        {
            cout<<query(1,l,r,1,n)<<endl;
        }
        else
        {
            update(1,l,r,1,n);
        }
    }
}    