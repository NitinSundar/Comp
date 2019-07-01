#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main() 
{
    int T;
    cin>>T;
    while(T--)
    {
        int m;
        cin>>m;
        
        int a[m];
        
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
        }
        int n;
        cin>>n;
        int s[n+1];
        memset(s,0,sizeof(s));
        s[0] = 1;
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int f = i-s[j];
               if(f>=0) s[i]+=s[f];
            }
        }
        cout<<s[n]<<"\n";
        
    }
    
    return 0;
}