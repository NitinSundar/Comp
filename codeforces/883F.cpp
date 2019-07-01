#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long int lli;
int main()
{
	IOS
	int n;
	cin>>n;
	string s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	for(int i=0;i<n;i++)
	{
		string temp="";
		int l=(int)s[i].size();
		int j=0;
		while(j<l )
		{
			if(s[i][j]=='u') temp=temp+"oo";
			else temp=temp+s[i][j];
			j++;
		}
		s[i]=temp;
		//cout<<s[i]<<endl;
	}
	set<string> words;
	for(int i=0;i<n;i++)
	{
		string temp="";
		int l=(int)s[i].size();
		int j=0;
		while(j<l )
		{
			if(s[i][j]=='k')
			{
				int m;
				for(m=j+1;m<l;m++)
				{
					if(s[i][m]!='k') break;
				}
				if(s[i][m]=='h')
				{
					temp=temp+'h';
					j=m+1;
					continue;
				}
				else
				{
					for(int p=j;p<m;p++) temp=temp+'k';
				}
			}
			else temp=temp+s[i][j];
			j++;
		}
		s[i]=temp;	
		//cout<<s[i];
		words.insert(s[i]);
	}
	cout<<(int)words.size();
	//for(set<string>::iterator it=words.begin();it!=words.end();it++) cout<<*it<<endl;
	return 0;
}