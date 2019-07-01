#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli ans(string s)
{
	lli ss=0,sum=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i] == 's') ss++;
		else sum+=ss;
	}
	return sum;
}
/*bool comp(string& a,string& b)
{
	string c=a+b;
	string d=b+a;
	return ans(c)>ans(d);
}*/
int main()
{
	int n;
	cin>>n;
	string s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	sort(s,s+n, comp(string a,string b) {
		return ans(a+b)>ans(b+a);
			}
		);
	
	string temp;
	for(int i=0;i<n;i++) temp=temp+s[i];
	cout<<ans(temp);
	return 0;
}