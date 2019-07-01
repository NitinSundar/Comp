#include <bits/stdc++.h>
using namespace std;
vector<string> ans;
void func(string s,int l,int r)
{
    if(l == r)
    {
        ans.push_back(s);
    }
    else
    {
        for(int i = l ; i<=r ; i++)
        {
            swap(s[i],s[l]);
            func(s,l+1,r);
            swap(s[i],s[l]);
        }
    }
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        func(s,0,(int)s.size()-1);
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
       ans.clear(); 
        cout<<endl;
    }
    
    
    return 0;
}