#include<bits/stdc++.h>
using namespace std;
const int N=3e5+50;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		set<int> s;
		int n,k;
		cin>>n>>k;
		for(int j,i=0;i<n && cin>>j;i++) s.insert(j);
		for(int i=0;i<N;i++)
		{
			if(s.find(i)==s.end())
			{
				if(k==0)
				{
					cout<<i<<endl;
					break;
				}
				else
				{
					k--;
				}
				
			}
			s.insert(i);
		}	
	}
	return 0;
}