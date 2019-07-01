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
       int a[26] = {0};
       for(int i=0;i<s.size();i++)
       {
          a[s[i]-'a']++;
       }
       int ans,freq = 0;
       for(int i=0;i<26;i++)
       {
          if(a[i]>freq)
          {
            freq = a[i];
            ans = i;
          }
       }
       cout<<(char)(ans+97)<<endl;
    }   
    return 0;
}