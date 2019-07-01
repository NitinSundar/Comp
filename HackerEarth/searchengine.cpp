#include<bits/stdc++.h>
using namespace std;

map<string,set<int> > mp;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int val = 0;
		string s,temp;
		cin>>s;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]>='a' && s[i]<='z') temp=temp+s[i];
			else val = val*10 + s[i]-'0';
		}
		if(temp.size() == s.size())
		{
			if(mp.find(temp) != mp.end())
			{
				set<int> v = (mp.find(temp))->second;
				int f=0;
				while(1)
				{
					if(v.count(f) == 0) 
					{
						cout<<temp<<f<<endl;
						v.insert(f);
						break;
					}
				}
			}
			else
				
		}
		else
		{

		}
	}
	return 0;
}