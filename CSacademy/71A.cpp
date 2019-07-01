#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
int main()
{
    string s,ans;
    cin>>s;
    int count  = 0;
   
 
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == 'B') 
            {
                if(count) ans+='A';
                count = 0;
                ans+='B';
            }
        else
        {
            count++;
        }
    }
    if(count) ans+='A';
    cout<<ans;
    return 0;
}