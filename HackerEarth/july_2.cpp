#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define IOS ios::sync_with_stdio(0);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      lli a[n];
      for(int i=0;i<n;i++) cin>>a[i];
      sort(a,a+n);
      lli mi=0,ma=0;
      for(int i=0;i<n;i+=2) mi+=abs(a[i]-a[i+1]);
      for(int i=0,j=n-1;i<j;i++,j--) ma+=abs(a[i]-a[j]);
      cout<<mi<<' '<<ma<<"\n";
    }
    return 0;
}
