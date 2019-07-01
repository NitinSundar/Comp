#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    int m;
    cin>>m;
    lli a[m];
    for(int i=0;i<m;i++) cin>>a[i];
    sort(a,a+m);
    lli f=1e9;
    for(int i=1;i<m;i++) f=min(f,a[i]-a[i-1]);
    set<lli> s;
    for(lli j=1;j*j <= f;j++)
    {
        if(f%j==0)
        {
           s.insert(j);
           s.insert(f/j);
            
        }
    }
    s.erase(1);
    for(auto it=s.begin();it!=s.end();it++)
    {
        lli x=*it;
        lli p=a[0]%x;
        bool flag=true;
        for(int i=0;i<m;i++)
        {
            if(a[i]%x != p) flag=false;
        }
        if(flag) cout<<x<<' ';
    }
    
    return 0;
}
