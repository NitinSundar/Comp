#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    string s;
    cin>>s;
    string t;
    for(int i=s.size()-1;i>0;i--) t+=s[i];
        cout<<t+s;
    return 0;
}