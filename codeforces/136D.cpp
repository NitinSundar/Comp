#include<iostream>
using namespace std;
const int N=101000;
int l[N],r[N],p[N],a[N],cnt[N],out[N];
int main()
{
	int n,q;
	cin>>n>>q;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]<N) cnt[a[i]]++;
	}
	for(int i=0;i<q;i++) cin>>l[i]>>r[i];
	for(int num=1;num<N;num++)
	{
		if(cnt[num]>=num)
		{
			p[0]=0;
			for(int i=1;i<=n;i++) p[i]=p[i-1]+(num==a[i]);
			for(int i=0;i<q;i++) out[i]+=((p[r[i]]-p[l[i]-1])==num);	
		}
	}	
	for(int i=0;i<q;i++) cout<<out[i]<<"\n";
	return 0;
}