#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s,t="hydro",r="ic";
		cin>>s;
		int i,j,a=0,b=0;
		for(i=0;i<5 && i<s.size();i++)
		{
			if(s[i] == t[i]) continue;
			else break;
		}
		if(i == 5) a=1;
		for(i=s.size()-2,j=0;i<s.size();i++,j++)
			if(s[i] == r[j]) continue;
			else break;
		if(j == 2) b=1;
		if(a && b) cout<<"non-metal acid\n";
		else if(b) cout<<"polyatomic acid\n";
		else cout<<"not an acid\n";
	}
	return 0;
}