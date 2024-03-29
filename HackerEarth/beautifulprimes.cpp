#include <bits/stdc++.h>
#define M 1000000007
#define lli long long
using namespace std;
lli P[100005];
lli A[100005];
lli fast_pow(lli a, lli b)
{
	lli res = 1;
	while ( b > 0 ) {
		if ( b&1 ) res = (res*a)%M;
		a = (a*a)%M;
		b >>= 1;
	}
	return res;
}
int main()
{
	int t,n;
	cin >> t;
	assert(t<=10);
	while ( t-- ) {
		cin >> n;
		assert(n<=100000);
		lli pro = 1;
		for ( int i = 0; i < n; i++ ) cin >> P[i], assert(P[i]<=1000000), pro = (pro*P[i])%M;
		for ( int i = 0; i < n; i++ ) cin >> A[i], assert(A[i]<=1000000000);
		for ( int i = 0; i < n; i++ ) {
			lli val = fast_pow(P[i],A[i]);
			val--;
			while ( val < 0 ) val += M;
			val = (val*fast_pow(P[i]-1,M-2))%M;
			pro = (pro*val)%M; 
		}
		cout << pro << endl;
	}
	return 0;
}