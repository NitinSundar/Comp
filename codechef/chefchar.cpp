#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int a[256]={0};
		int c=0;
		for(int i=0;i<4 && i<s.size();i++) a[s[i]]++;
		if(a['c'] && a['h'] && a['e'] && a['f'] ) c++;
		for(int i=4;i<s.size();i++)
		{
			a[s[i]]++;
			a[s[i-4]]--;
			if(a['c'] && a['h'] && a['e'] && a['f'] ) c++;
		}
		if(c) cout<<"lovely "<<c;
		else cout<<"normal";
		cout<<"\n";
	}
	return 0;
}