#include<bits/stdc++.h>
using namespace std;
int n,k;
set<int> ans;
int a[1005];
void func(int val,int ind,int count)
{
	if(count == k)
	{
		ans.insert(val);
		return;
	}
	else if(count<k)
		ans.insert(val); 
	for(int i = ind;i<n;i++)
	{
		func(val|a[i],i,count+1);
	}
}
int main()
{
	cin>>n>>k;
	for(int  i = 0 ; i < n  ; i++)
	{
		cin>>a[i];
	}
	for(int i = 0 ; i < n ; i++)
	{
		func(a[i],i+1,1);
	}
	cout<<ans.size();
	return 0;
}