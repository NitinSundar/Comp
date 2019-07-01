#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++) cin>>a[i]>>b[i];
		int q;
		cin>>q;
		while(q--)
		{
			int m,c=0;
			cin>>m;
			int test[m];
			for(int i=0;i<m;i++) cin>>test[i];
			for(int i=0;i<n;i++)
			{
				int o=0;
				for(int j=0;j<m;j++)
				{
					if(a[i]<=test[j] && test[j]<=b[i]) o++;
				}
				c+=(o%2);
			}
			cout<<c<<"\n";
		}
	}
	return 0;
}