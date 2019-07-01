#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    lli k;
    string s;
    cin>>k;
    cin>>s;
    lli c=0;
    vector <char> v;
    for(int i=0;i<s.size();i++){
        c+=s[i]-48;
        v.push_back(s[i]);
    }
    sort(v.begin(),v.end());
    lli ans=0;
    if(c<k){
        lli cut=k-c;
        //cout<<cut;
        int i=0;
        while(cut>0){
                if(i==s.size()) break;
            lli f=v[i]-48;
            i++;
            f=9-f;
            //cout<<f;
            if(f<=cut){
                cut=cut-f;
                ans++;
            }
            else if(f>cut){
                cut=0;
                ans++;
            }
        }
    }
    cout<<ans;

    return 0;
}
///ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
