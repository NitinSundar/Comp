#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
pair<lli,lli> str(char c)
{
    if(c=='U') return {0,1};
    else if(c=='D') return {0,-1};
    else if(c=='R') return {1,0};
    else return {-1,0};
}
int main()
{
    lli a,b;
    string s;
    cin>>a>>b>>s;
    vector <pair<lli,lli> >v;
    lli x=0,y=0;
    pair<int,int> p,q;
    bool flag=false;
    p={x,y};
    v.push_back(p);
    for(int i=0;i<s.size();i++)
    {
        q=str(s[i]);
        p.first+=q.first;
        p.second+=q.second;
        v.push_back(p);
        
    }
    lli k=20000000;
    
        int l=s.size();
        lli m=p.first;
        lli n=p.second;
        for(int i=0;i<=l;i++){
            x=v[i].first;
            y=v[i].second;
            lli dx=a-x;
            lli dy=b-y;
            if(m) k=dx/m;
            else if(n) k=dy/n;
            else k=1;
            if(k>=0 && dx==m*k && dy==n*k) {flag=true;break;}
        
    }
    if(flag) cout<<"Yes";
    else cout<<"No";
    
    return 0;
}
