#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
	IOS
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		map<int,int> mp;
		vector<int> vp;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			mp[x]++;
		}
		for(map<int,int>::iterator it = mp.begin();it!=mp.end();it++)
		{
			if(it->second > 1) vp.push_back(it->first);
			if(it->second > 3) vp.push_back(it->first);
		}
		//cout<<setprecision(12);
		double ans = 1e15;
		int a1,a2;
		for(int i=1;i<vp.size();i++)
		{
			double a = vp[i-1],b = vp[i];
			double res = (a/b) + (b/a);
			res = res * res;
			if(res < ans)
			{
				ans= res;
				a1 =(int)a;
				a2 = (int)b;
			}
			//cout<<res<<" ";
		}
		cout<<a1<<" "<<a1<<" "<<a2<<" "<<a2<<endl;
	}
	return 0;
}

