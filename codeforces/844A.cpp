#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define trace(a) cout<<a<<"\n"
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;
    int k,c=0,ans=0;
    int a[26]={0};
    cin>>s>>k;
    if(k>s.size()){
        cout<<"impossible";
        return 0;
    }
    for(int i=0;i<s.size();i++)
    {
        a[s[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(a[i]>0) c++;
    }
    if(c>=k) ans=0;
    else ans=k-c;
    cout<<ans;
    return 0;
}
