#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main() 
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        deque<int> g,s;
        int i=0;
        for(i=0;i<k;i++)
        {
            while(!s.empty() && a[s.back()]>=a[i])
                s.pop_back();
            while(!g.empty() && a[g.back()]<=a[i])
                g.pop_back();
            s.push_back(i);
            g.push_back(i);
        }
        int ans = 0;
        for(;i<n;i++)
        {
            ans+=(a[g.front()] + a[s.front()]);
            while(!s.empty() && s.front()<=i-k)
                s.pop_front();
            while(!g.empty() && g.front()<=i-k)
                g.pop_front();
            while(!s.empty() && a[s.back()]>=a[i])
                s.pop_back();
            while(!g.empty() && a[g.back()]<=a[i])
                g.pop_back();
            s.push_back(i);
            g.push_back(i);
        }
        ans+=(a[g.front()] + a[s.front()]);
        cout<<ans<<"\n";    
    }
    
    
    return 0;
}