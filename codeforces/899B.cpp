#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[24]={31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};
	int b[24]={31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};
	int c[24]={31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	for(int i=0;i<24;i++)
	{
		int p=0;
		for(int k=0;k<n;k++)
		{
			int x=(i+k)%24;
			if(arr[k] == a[x]) p++;
			else break;
			
		}
		if(p==n)
		{
			cout<<"YES";
			return 0;
		}

	}	
	for(int i=0;i<24;i++)
	{
		int p=0;
		for(int k=0;k<n;k++)
		{
			int x=(i+k)%24;
			if(arr[k] == b[x]) p++;
			else break;
			
		}
		if(p==n)
		{
			cout<<"YES";
			return 0;
		}

	}	
	for(int i=0;i<24;i++)
	{
		int p=0;
		for(int k=0;k<n;k++)
		{
			int x=(i+k)%24;
			if(arr[k] == c[x]) p++;
			else break;
			
		}
		if(p==n)
		{
			cout<<"YES";
			return 0;
		}

	}	
	cout<<"NO";
	return 0;
}