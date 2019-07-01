#include <bits/stdc++.h>
#define lli long long int
#define mp make_pair
#define pb push_back
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    double a[n];
	    for(int i=0;i<n;i++)
	    	cin>>a[i];
	    int p =1;
	    double ans = 0;
	    for(int i=0;i<n;i++) p=p*2;
	    for(int i=1;i<p;i++)
	    {
	    	double c=0;
	    	int x = i,j=0;
	    	while(x>0)
	    	{
	    		if(x%2) c++;
	    		x=x/2;
	    	}
	    	x = i;
	    	while(x>0)
	    	{
	    		if(x%2) ans+=(a[j]/c);
	    		x=x/2;
	    		j++;
	    	}
	    }
	    cout<<ans<<endl;
	}
	
	return 0;
}