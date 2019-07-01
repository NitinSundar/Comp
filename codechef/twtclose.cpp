#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define inf 10000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    IOS
    int n,T;
    cin>>n>>T;
    set<int> opened,closed;
    for(int i=1;i<=n;i++) closed.insert(i);
    while(T--)
    {
        string s;
        cin>>s;
        if(s == "CLICK")
        {
            int x;
            cin>>x;
            if(closed.count(x))
            {
                closed.erase(x);
                opened.insert(x);
            }
            else
            {
                opened.erase(x);
                closed.insert(x);
            }
        }
        else
        {
            for(set<int>::iterator it = opened.begin();it!=opened.end();it++)
            {
                closed.insert(*it);
            }
            opened.clear();
        }
        cout<<opened.size()<<endl;
    }
    

    return 0;
}


