#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int T=1;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    set <char> st;
    for(int i=0;i<n;i++){
        if(s[i]>='a' && s[i]<='z'){
            st.insert(s[i]);
            ans=max(ans,(int)st.size());
        }
        else{
            st.clear();
        }
    }
    cout<<ans;
    return 0;
}
