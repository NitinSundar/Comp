#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define endl "\n"
#define fi first
#define se second
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
	IOS
	int n,m;
	cin>>n>>m;
	pair<int,int> ans;
	string s[n];
	for(int i=0;i<n;i++)
		cin>>s[i];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(s[i][j] == 'B')
			{
				int b = 1;
				for(int k=j+1;k<m;k++)
				{
					if(s[i][k] == 'B')
						b++;
					else
						break;
				}
				if(b%2 == 0)
					break;
				int count = 0;
				for(int k=i;k<i+b;k++)
					for(int l = j;l<j+b;l++)
					{
						if(s[k][l] == 'B')
							count++;
					}
				if(count == b*b)
				{
					cout<<1+i+(b/2)<<" "<<1+j+(b/2);
					return 0;
				}	
			}
		}
	}
	
	return 0;
}