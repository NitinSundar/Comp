#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main() 
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for (int i = 0; i < n; ++i)
        {
            int f = 1;
            for(int j=i+1;j<n;j++)
            {
                if(a[j] > a[i]) f = 0;
            }
            if(f) cout<<a[i]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}