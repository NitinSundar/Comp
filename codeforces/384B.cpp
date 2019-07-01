#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int func(int a,int b,int k)
{
	if(a > b && k==0) return 1;
	if(a < b && k==1) return 1;
	return 0;
}
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	int a[n][m];
	vector<pair<int,int> > ans; 
	for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>a[i][j];
	for(int i=0;i<m-1;i++)
	{
		for(int j=i+1;j<m;j++)
		{
			for(int l=0;l<n;l++)
			{
				if(func(a[l][i],a[l][j],k))
				{
					for(int f=l;f<n;f++)
					{
						int temp=a[f][i];
						a[f][i]=a[f][j];
						a[f][j]=temp;
					}
					if(k==0) ans.push_back(make_pair(i,j));
					else ans.push_back(make_pair(j,i));
					///cout<<i<<j<<endl;
					break;
				}
			}
		}
	}
	cout<<ans.size()<<endl;	
	for(int i=0;i<ans.size();i++) cout<<ans[i].first + 1 <<' '<<ans[i].second + 1<<endl;
	return 0;
}

