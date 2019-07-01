#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
	IOS
	string a,b;
	cin>>a>>b;
	int l = (int)a.size() + (int)b.size();
	int l1 = a.size(),l2 = b.size();
	int i=0,j=0;
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	while(i<l1 && j<l2)
	{
		if(a[i] == b[j]) 
			{
				l-=2;
				i++;
				j++;
			}
		else break;	

	}
	cout<<l;
	return 0; 
}