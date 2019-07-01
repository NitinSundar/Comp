#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define endl "\n"
const int N=1e5+5;
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    priority_queue <int> pq;
    queue <int> q;
    for(int i=0;i<n;i++){
        int j;
        cin>>j;
        pq.push(-1*j);
        q.push(j);
    }
    lli ans=0;
    while(!q.empty())
    {
        ans++;
        int k=q.front();
        if(k==-1*pq.top())
        {
            pq.pop();
            q.pop();
        }
        else{
            q.pop();
            q.push(k);
        }
    }
    cout<<ans;
    return 0;
}
