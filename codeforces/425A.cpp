#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    string good;
    cin>>good;
    set <char> st;
    for(int i=0;i<good.size();i++) st.insert(good[i]);
    string s;
    cin>>s;
    int n;
    cin>>n;
    while(n--)
    {
        string check;
        cin>>check;
        bool flag=true,abc=1;

        for(int i=0;i<s.size();i++)
        {

            if(s[i]=='?'){
                    if(i>=check.size()){
                        flag=false;
                        break;
                    }
                if(st.count(check[i])==0) flag=false;

            }
            else if(s[i]=='*'){
                    abc=0;
                    if(i>check.size()){
                        flag=false;
                        break;
                    }
                if(i==check.size()) continue;
                int j=i+check.size()-s.size();
                while(j>=0 && i<=j++) if(st.count(check[i++])>0) flag=false;

            }
            else{
                    if(i>=check.size()){
                        flag=false;
                        break;
                    }
                if(s[i]!=check[i]) flag=false;
            }
        }
        if(abc && s.size()>check.size()) flag=false;
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
