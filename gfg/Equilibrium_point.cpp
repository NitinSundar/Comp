#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int size;
		cin>>size;
		int arr[size];
		int sum = 0;
		for(int i=0;i<size;i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}
		int i;
		int sum1 = arr[0];
		for(i=1;i<size-1;i++)
		{
			if(sum-sum1-arr[i]== sum1)break;
			sum1+=arr[i];
		}
		if(size==1)cout<<"1\n";
		else if(size == 2) cout<<"-1\n";
		else if(i==size-1)cout<<"-1\n";
		else cout<<i+1<<endl;
		
	}
	return 0;
}