#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli fun(lli a[], int siz)
{
    lli max_so_far = -1e16, max_ending_here = 0;
 
    for (int i = 0; i < siz; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
    	int n;lli k;
        cin>>n>>k;
        lli a[n],s=0;
        for(int i=0;i<n;i++)  {cin>>a[i];s+=a[i];}
        lli p=fun(a,n);
        if(n*k <1000000)
        {
            lli b[n*k];
            for(int i=0;i<n*k;i++) b[i]=a[i%n];
            cout<<fun(b,n*k)<<endl;    
        }
        else
        {
            lli a1[n],a2[n];
        a1[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--) a1[i]=a[i]+a1[i+1];
        a2[0]=a[0];
        for(int i=1;i<n;i++) a2[i]=a[i]+a2[i-1];
        lli f=(k-2)*s;
    lli temp=-1e16;
        for(int i=n-1;i>=0;i--) temp=max(temp,a1[i]);
            f+=temp;
        temp=-1e16;
        for(int i=0;i<n;i++) temp=max(temp,a2[i]);
        lli f1=f+temp;
        lli b[n+n],c[3*n];
        for(int i=0;i<n+n;i++) b[i]=a[i%n];
            for(int i=0;i<n+n+n;i++) c[i]=a[i%n];
        cout<<max(fun(a,n),max(fun(b,n+n),max(fun(c,n+n+n),max(k*s,f1))))<<endl;
        }        
        
    }
	return 0;
}