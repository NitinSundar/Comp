#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
	lli T;
	cin>>T;
	while(T--)
	{
	    lli n;
	    cin>>n;
	    lli ans = 1,c=0;
	    while(n > 0)
	    {
	    	if(__gcd(ans,n) == 1)
	    	{
	    		ans = ans*n;
	    		c++;
	    	}
	    	if(c == 4)
	    		break;
	    	n--;
	    }
	    cout<<ans<<"\n";
	}
	
	return 0;
}