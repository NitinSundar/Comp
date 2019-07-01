#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main() 
{
    int T;
    cin>>T;
    
    while(T--)
    {
        int f = 1;
        string s;
        cin>>s;
        for(int i=0,j=s.size()-1;i<=j;i++,j--)
        {
            if(s[i]!=s[j] ) f = 0;
        }
        if(f) cout<<"Yes\n";
        else cout<<"No\n"; 
    }   
    return 0;
}