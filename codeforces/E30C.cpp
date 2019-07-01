#include<bits/stdc++.h>
using namespace std;
int n,m,k;
int a[105][105];
vector<int> temp;
int ans=0,changes=0;
void func()
{
	int sz=temp.size();
	int a=0,r=0;
 	vector <int> ind;
 	for(int i=0;i<sz;i++) if(temp[i]==1) ind.push_back(i);
 	for(int i=0;i<(int)ind.size();i++)
 	{
 		int c=0;
 		for(int j=ind[i];j-ind[i]<min(k,n-ind[i]);j++)
 		{
 			c+=temp[j];
 		}
 		if(c>a)
 		{
 			a=c;
 			r=i;
 		}
 	}	
 	ans+=a;
 	changes+=r;
}
int main()
{
	cin>>n>>m>>k;	
	for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>a[i][j];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			temp.push_back(a[j][i]);
		}
		func();
		temp.clear();
	}
	cout<<ans<<' '<<changes<<endl;
	return 0;
}
