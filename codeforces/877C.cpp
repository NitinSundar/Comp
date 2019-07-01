#include<iostream>
using namespace std;
int n;
void even()
{
	for(int i=2;i<=n;i+=2) cout<<i<<' ';
}
void odd()
{
	for(int i=1;i<=n;i+=2) cout<<i<<' ';
}
int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n;
	cout<<3*(n/2)+(n%2)<<endl;
	even();odd();even();
	return 0;
}


