#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int func(string a,string b)
{
	string s;
	int c=0;
	int l=b.size();
	if(a.size() < l) return 0;
	for(int i=0;i<=a.size()-l;i++)
	{
		for(int j=i;j<i+l ;j++)
		{
			s=s+a[j];
		}
		if(s==b)c++;
		s.clear();
	}
	return c;
}
int main()
{
	string s;
	cin>>s;
	int ans=0;
	ans+=func(s,"Danil");
	ans+=func(s,"Olya");
	ans+=func(s,"Slava");
	ans+=func(s,"Ann");
	ans+=func(s,"Nikita");
	if(ans==1) cout<<"YES";
	else cout<<"NO";	
	return 0;
}


