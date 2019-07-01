#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main() 
{
    int T;
    cin>>T;
    while(T--)
    {
        string s;
        cin>>s;
        reverse(s.begin(),s.end());
        lli x = 0,f=1;
        for(int i=0;i<s.size();i++)
        {
            x = x+(s[i]-'0')*f;
            f=f*2;
        }
        cout<<x<<endl;
    }   
    return 0;
}