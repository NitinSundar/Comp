#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int a[5];
int check(int x)
{
	if(x<5) a[x]++; 
}
int main()
{
	int b,c,d;
	cin>>b>>c>>d;
	check(b);check(c);check(d);
	if(a[1] || a[2]>=2 || a[3]==3 || (a[2]==1&&a[4]==2)) cout<<"YES";
	else cout<<"NO";
	return 0;
}