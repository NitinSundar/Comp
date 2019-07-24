#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define inf 10000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e5 + 5;

int main()
{
    IOS
    int n,q;
    cin>>n>>q;
    int ma = -1;
    deque<int> dq;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        dq.pb(x);
        ma = max(ma,x);
    }
    map<int,pair<int,int> > hs;
    int steps = 1;
    while(1)
    {
        
        int A = dq.at(0);
        int B = dq.at(1);
        dq.pop_front();
        dq.pop_front();
        int mm = max(A,B);
        int mn = min(A,B);
        hs[steps] = mp(A,B);
        dq.push_front(mm);
        dq.push_back(mn);
        if(mm == ma)
            break;
        steps++;
    }
    vector<int> v;
    for(deque<int>::iterator it = dq.begin();it!=dq.end();it++)
    {
        if(it == dq.begin()) continue;
        v.pb(*it);
        //cout<<*it<<" ";
    }
    while(q--)
    {
        lli x;
        cin>>x;
        if(x<=steps)
            cout<<hs[x].ff<<" "<<hs[x].ss<<endl;
        else
        {
            lli k = x - steps-1;
            k = k%(n-1);
            cout<<ma<<" "<<v[k]<<endl;
        }
    }

    

    return 0;
}


