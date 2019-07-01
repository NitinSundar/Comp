#include<bits/stdc++.h>
using namespace std;

int main()
{
	multiset<int> st;
	int n;cin>>n;
	int a[n],cur=0,ans=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		st.insert(a[i]);
		while(*st.rbegin() - *st.begin() >1 )
		{
			st.erase(st.find(a[cur++]));
		}
		ans=max(ans,(int)st.size());
	}
	cout<<ans;
	return 0; 
}