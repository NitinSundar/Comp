#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	double med = arr[0];
	priority_queue<double> s;
	priority_queue<double,vector<double>,greater<double> > g;
	s.push(arr[0]);
	for(int i=1;i<n;i++)
	{
		double temp = arr[i];
		if(s.size()>g.size())
		{
			if(temp < med)
			{
				g.push(s.top());
				s.pop();
				s.push(temp);
			}
			else
			{
				g.push(temp);
			}
			med = (s.top() + g.top())/2.0;
		}
		else if(s.size()==g.size())
		{
			if(temp<med)
			{
				s.push(temp);
				med = s.top();
			}
			else
			{
				g.push(arr[i]);
				med = g.top();
			}
		}
		else
		{
			if(temp>med)
			{
				s.push(g.top());
				g.pop();
				g.push(temp);
			}
			else
			{
				s.push(temp);
			}
			med = (s.top() + g.top())/2.0;
		}

		cout<<med<<endl;
	}
}