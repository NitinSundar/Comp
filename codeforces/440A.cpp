#include<bits/stdc++.h>
using namespace std;
int c[100]={0};
int main()
{
	int a,b;
	cin>>a>>b;
	int arr1[a],arr2[b];
	for(int i=0;i<a;i++) {cin>>arr1[i];c[arr1[i]]++;}
	for(int i=0;i<b;i++) {cin>>arr2[i];c[arr2[i]]++;}
	for(int i=1;i<=9;i++){
		if(c[i]==2)
		{
			cout<<i;
			return 0;
		}
	}
	sort(arr1,arr1+a);
	sort(arr2,arr2+b);
	set <int> s;
	s.insert(arr1[0]);
	s.insert(arr2[0]);
	set<int>::iterator it;
	for(it=s.begin();it!=s.end();it++) cout<<*it;	
	return 0;
}