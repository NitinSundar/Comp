#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

lli f(lli a,lli b,lli m)
{
	if(b == 0) 
		return 1;
	lli p = f(a,b/2,m);
	p = (p%m * p%m)%m;
	if(b%2)
		p =(p*a)%m;
	return p%m;
}

const int N = 2e6 + 5;
lli pow2[N],pow3[N];
int main()
{
	IOS
	lli mod = 1e9 + 7;
	int T=1;
	cin>>T;
	pow2[0] = pow3[0] = 1;
	for(int i=1;i<N;i++)
	{
		pow2[i] = (pow2[i-1]*2)%mod;
		pow3[i] = (pow3[i-1]*3)%mod;
	}
	while(T--)
	{
		
		int n;
		cin>>n;
		lli ans = (pow2[n+n] + pow2[n])%mod;
		ans = (ans - (2*pow3[n]))%mod;
		if(ans<0) ans+=mod;
		cout<<ans<<"\n";

	}
	return 0;
}
/*
Let A be a set containing k elements (k is non zero quantity and cannot be equal to n as per the condition given in question)
Now nCk is the number of ways of choosing this set A. Now number of ways of choosing B = T - b⊆a - a⊂b where
T(Total number of sets ignoring null and complete set ie 2^n -2) 
b⊆a(case when B is a subset of A ie 2^k-1 ignoring null set "note: we are not ignoring complete set of k element because b can have all elements of k") 
a⊂b(case when A is a subset of B ie all k elements already present so 2^(n-k)-1(because if B does not contain any extra element other than k elements that ie B=A we have considered that case in 2nd part b⊆a ) -1(because if B contains all elements of n=k+n-k than B becomes complete set which we have to ignore))
So the complete formula of B becomes (2^n - 2 - (2^k - 1) - (2^(n-k) - 2)).Now 1<=k<=n-1 we have to sum the series nCk*(2^n - 2 - (2^k - 1) - (2^(n-k) - 2)). Now by using binomial series Sum(nCk) = 2^n-2 , Sum(nCk*(2^k)) = 3^n - 1 - 2^n = Sum(nCk*(2^(n-k)) because C(n, k) = C(n, n-k) so the whole formula reduces to (2^n-2)(2^n+1)-(2*(3^n - 1-2^n)) which is simplified further to 2^(2n) +2^n -2*(3^n)
*/
