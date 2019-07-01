#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int T=1;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>T;
    while(T--)
    {
        lli a[26]={0},b[26]={0};
        for(int i=0;i<26;i++) cin>>a[i];
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            b[s[i]-'a']=1;
        }
        lli ans=0;
        for(int i=0;i<26;i++)
        {
            if(b[i]==0) ans+=a[i];
        }
        cout<<ans<<"\n";
    }
    return 0;
}
