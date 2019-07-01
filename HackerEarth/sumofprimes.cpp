#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define fi first
#define se second
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e6 + 5;
int pr[N],s[N];
void pre()
{
	for(int i=2;i<N;i++)
	{
		pr[i] = i;
	}
	for(int i=2;i*i<N;i++)
	{
		if(pr[i] == i)
		{
			for(int j = i+i;j<N;j+=i)
				pr[j] = i;
		}
	}
	for(int i=2;i<N;i++)
		if(pr[i] == i)
			s[i] = i;
	for(int i=1;i<N;i++)
		s[i] = s[i-1] + s[i];
}
int main()
{
	IOS
	pre();
	int q;
	cin>>q;

	while(q--)
	{
		int l,r;
		cin>>l>>r;
		coout<<s[r]-s[l-1]<<"\n";
	}
	return 0;
}