#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


/*lli f1(lli a,lli b)
{
	if(b == 0)
		return 1;
	lli p = f1(a,b/2);
	p = p*p;
	if(b%2 == 1)
		p = p *a;
	return p;
}

lli divisors(lli x)
{
    lli c = 0;
    for(lli i=1;i*i<=x;i++)
    {
        if(x%i == 0)
        {
            c++;
            if(i != x/i) c++;
        }
    }
    return c;
}

const int N = 1e6 + 5;
int prime[N];
void sieve()
{
	memset(prime,1,sizeof(prime));
	prime[0] = prime[1] = 0;
	for(int i=2;i*i<N;i++)
	{
		if(prime[i] == 1)
		{
			for(int j=i+i;j<N;j+=i)
				prime[j] = 0;
		}
	}
}*/
lli mult(lli a,lli b,lli diff)
{
	lli arr[50]={0};
	lli num[50]={0},sum=0;
	arr[0]=a%diff;
	for(int i=1;i<50;i++)
	{
		arr[i]=(2*arr[i-1])%diff;
	}
	for(int i=0;i<50;i++)
	{
		num[i]=b%2;
		b=b/2;
	}
	for(int i=0;i<50;i++)
	{
		if(num[i]==1)
		{
			sum=(sum+arr[i])%diff;
		}
	}
return sum;

}
lli f(lli a,lli b,lli m)
{
	if(b == 0) 
		return 1;
	lli p = f(a,b/2,m);
	p = mult(p,p,m)%m;
	if(b%2)
		p = mult(p,a,m)%m;
	return p%m;
}
int main()
{
	IOS
	int T;
	cin>>T;
	while(T--)
	{
		lli a,b,n,mod = 1000000007;
		cin>>a>>b>>n;
		if(n<10)
		{
			lli j = f(a,n,mod);
			lli k = f(b,n,mod);
			j = (j + k);
			k = abs(a-b);
			lli ans;
			if( k == 0)
				ans = j;
			else
				ans = __gcd(j,k)%mod;
			cout<<(ans+mod)%mod<<endl;
			continue;
		}
		if(a!=b)
		{
			mod = abs(a-b);
		}
		lli j = f(a,n,mod);
		lli k = f(b,n,mod);
		j = (j + k);
		k = abs(a-b);
		lli ans;
		if( k == 0)
			ans = j;
		else
			ans = __gcd(j,k)%mod;
		cout<<(ans+mod)%mod<<endl;
	}
	//cout<<mult(15,50,10000)<<"f"<<endl;
	return 0;
}