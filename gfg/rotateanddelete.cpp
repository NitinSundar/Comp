#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
	lli T;
	cin>>T;
	while(T--)
	{
	    
	    int n;
	    cin>>n;
	    vector<int> v,v1;
	    for(int i=0;i<n;i++)
	    {
	    	int x;
	    	cin>>x;
	    	v.push_back(x);
	    }
	    int i = 1;
	    while(v.size()!=1)
	    {
	    	v1.clear();
	    	v1.push_back(v.back());
	    	int f = v.size();
	    	for(int i=0;i<f-1;i++)
	    	{
	    	    v1.push_back(v[i]);
	    	}
	    	
	    	reverse(v1.begin(),v1.end());
	    	int j = i;
	    	if(j>=v1.size())
	    	    {
	    	    	v1.pop_back();
	    	    	v = v1;
	    	    	reverse(v.begin(),v.end());
	    	    }
	    	else
	    	    {
	    	        v.clear();
	    	        for(int i1=0;i1<v1.size();i1++)
	    	        {
	    	            if(i1+1 == j)
	    	                continue;
	    	            v.push_back(v1[i1]);
	    	        }
	    	        reverse(v.begin(),v.end());
	    	    }
	    	    i++;
	    	
	    	//cout<<"\n";
	    }
	    cout<<v[0]<<"\n";
	}
	
	return 0;
}