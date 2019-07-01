#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int a,b,change;
bool hasone(int x)
{
	bool flag=false;
	while(x>0)
	{
		if(x%10 == 7) flag = true;
		x=x/10;
	}
	return flag;
}
void func()
{
	b=b-change;
	if(b<0)
	{
		a=a-1;
		a=(a+24)%24;
		b=60+b;
	}
}
int main()
{
	int c=0;
	cin>>change>>a>>b;
	while((hasone(a) || hasone(b)) == false)
	{	
		func();
		c++;
	}
	cout<<c;
	return 0;
}