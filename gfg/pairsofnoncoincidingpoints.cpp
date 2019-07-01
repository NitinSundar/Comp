#include <bits/stdc++.h>
#define lli long long int
#define mp make_pair
#define pb push_back
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    set<pair<int,int> > s;
	    for(int i=0;i<n;i++)
	    {
	    	int x,y;
	    	cin>>x>>y;
	    	s.insert(mp(x,y));
	    }
	    unordered_map<int, int> h1,h2;
	    for(auto & val : s)
	    	h1[val.first]++;

	    for(auto & val : s)
	    	h2[val.second]++;

	    int ans = 0;
	    for(auto &it:h1)
	    {
	    	int f = it.second;
	    	ans+=(f*(f-1))/2;
	    }

	    for(auto &it:h2)
	    {
	    	int f = it.second;
	    	ans+=(f*(f-1))/2;
	    }
	    cout<<ans<<endl;
	}
	
	return 0;
}