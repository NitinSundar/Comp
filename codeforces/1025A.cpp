#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back

#define fi first
#define se second
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	IOS
	int n;
	string s;
	cin>>n;
	cin>>s;
	int arr[26] = {0};
	for(int i=0;i<n;i++)
	{
		arr[s[i]-'a']++;
	}
	int flag = 0;
	for(int i=0;i<26;i++)
		if(arr[i] > 1)
			flag = 1;
	if(n == 1)
		flag = 1;	
	if(flag)
		cout<<"Yes";
	else
		cout<<"No";
	return 0;
}