#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int T=1;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    vector <int> v[n+1];

    for(int i=1;i<n;i++){
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    queue<pair<int,int> > q;
    q.push({1,1});

    lli first=0;
    int vis[n+1]={0};
    vis[1]=1;
    while(!q.empty())
    {
        int x=(q.front()).first,f=(q.front()).second;
        q.pop();
        //cout<<x;
        if(f==1) first++;
        for(int i=0;i<v[x].size();i++){
            if(vis[v[x][i]]==0){q.push({v[x][i],1-f});
            vis[v[x][i]]=1;}
        }

    }
    lli second=n-first;
    first=first*second;
    cout<<first-(n-1);
    return 0;
}
