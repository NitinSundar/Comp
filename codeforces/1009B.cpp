#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	IOS
	string s;
	cin>>s;
	int p=0;
	for(int i=0;i<s.length()-1;i++)
	{
		if(p>=s.length())break;
		if(s[i]-s[i+1]==1 || s[i]-s[i+1]==-1)
		{
			if(s[i]>s[i+1])
			{
				char temp = s[p];
				s[p] = s[i+1];
				s[i+1] = temp;
				p++;
			}
			else
			{
				p = i+1;
			}
		}
		cout<<i<<" "<<p<<endl;
	}
	cout<<s<<endl;
	return 0;
}