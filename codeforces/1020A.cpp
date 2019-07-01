#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    int towers,floors,low,high,q;
    cin>>towers>>floors>>low>>high>>q;
    while(q--)
    {
        int x1,y1,x2,y2,ind;
        cin>>x1>>y1>>x2>>y2;
        if(x1 == x2)
        {
            cout<<abs(y1-y2)<<endl;
            continue;
        }
        int ans = abs(x1-x2);
        if(low<=y2 && y2<= high)
            ans+=abs(y1-y2);
        else
        {
            if(abs(y1-high) < abs(y1-low))
                ind = high;
            else
                ind = low;
            ans+= abs(ind-y1) + abs(ind-y2);
        }
        cout<<ans<<endl;
    }

    return 0;
}