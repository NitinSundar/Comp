#include<bits/stdc++.h>
using namespace std;
#define sz(a) int((a).size())
typedef long long int lli;
int main()
{
    string good;
    cin>>good;
    map <char,int> mp;
    for(int i=0;i<good.size();i++) mp[good[i]]=1;
    string s;
    cin>>s;
    int num=0;
    for(int i=0;i<sz(s);i++) num+=s[i]=='*';
    int q;
    cin>>q;
    while(q--)
    {
        string t;cin>>t;
        if(sz(s) - num >sz(t)){
            cout<<"NO\n";
            continue;
        }
        int k=sz(t)-sz(s)+num;
        int ptr=0,found=0;
        for(int i=0;i<sz(t);i++){
            if((s[ptr]=='?' && mp[t[i]]) || s[ptr]==t[i]){
            }
            else if(s[ptr]=='*'){
                for(int j=0;j<k;j++){
                    if(mp[t[i]]){
                        found=1;
                        break;
                    }
                    i++;
                }
                if(found) break;
                i--;
            }
            else{
                found=1;
                break;
            }
            ptr++;
        }
        if(found) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
