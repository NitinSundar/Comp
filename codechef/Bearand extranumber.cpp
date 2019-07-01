#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    lli T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int a[n];
        set<int> s;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s.insert(a[i]);
        }
        int k=-1;
        for(int i=0;i<n;i++)
        {
            int x=a[i];
            if( *(s.begin())==x )
            {
                if(s.count(x+1) == 0) k=x;
            }
            else if( *(s.end()) == x)
            {
                if(s.count(x-1) == 0) k=x;
            }
            else
            {
                if(s.count(x+1) + s.count(x-1) !=2) k=x;
            }
        }
        cout<<k<<endl;

    }
    return 0;
}