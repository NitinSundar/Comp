#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main() 
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        int s[1001] = {0};
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            s[x]++;
        }
        int f = 1;
        for(int i=a;i<=b;i++)
        {
            if(s[i] == 0) 
            {
                f = 0;
            }
        }
        if(f) cout<<"Yes\n";
        else cout<<"No\n";
    }
	
	return 0;
}