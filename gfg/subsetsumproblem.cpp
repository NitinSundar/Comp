#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main() 
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,s=0;
        cin>>n;
        int a[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        sort(a,a+n);
        if(s%2)
        {
            cout<<"NO\n";
            continue;
        }
        s =s/2 ;
        bool table[n+1][s+1];
        for(int i=0;i<=n;i++) table[i][0] = true;
        for(int j=1;j<=s;j++) table[0][j] = false;    
        for(int i=1;i<=n;i++)
        {
            //cout<<a[i];
            for(int j=1;j<=s;j++)
            {
                int x = j-a[i-1];
                if(x>=0)
                    table[i][j] = table[i-1][j]||table[i-1][x];
                else
                    table[i][j] = table[i-1][j];
             //   cout<<table[i][j]<<" ";
            }
          //  cout<<endl;
        }
        if(table[n][s]) cout<<"YES\n";
        else cout<<"NO\n";
    }
    
    return 0;
}