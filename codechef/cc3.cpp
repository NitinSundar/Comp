#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long int lli;

const int N=1e5+5;
int T=1;
int main()
{
	cin>>T;
	while(T--)
	{
		int n,m;
		cin>>n>>m;
		int a[n+1]={0};
		a[n]=m;
		int check=1,ans=0;
		while(check<n)
		{
			set<int> s;
			ans++;
			for(int i=1;i<n;i++)
			{
				if(a[i]<a[i+1] && s.count(i)==0)
				{
					a[i]++;
					if(a[i]==m) check++;
					s.insert(i+1);
				} 
			}
			s.clear();
			
		}
		cout<<ans<<endl;

	}
	return 0;
}
