#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
string s;
int func(string st)
{
	int l=(int)st.size(),l1=s.size();
	for(int i=0;i<=l1-l;i++)
	{
		string temp="";
		for(int j=i;j<i+l;j++)
		{
			temp=temp+s[j];
		}
		if(temp == st) return 1;
		//cout<<temp<<endl;
	}
	return 0;

}
int main()
{
	cin>>s;
	int c=0;
	c=c+func("Danil");
	c=c+func("Olya");
	c=c+func("Slava");
	c=c+func("Ann");
	c=c+func("Nikita");
	if(c == 1) cout<<"YES";
	else cout<<"NO";
	return 0;
}