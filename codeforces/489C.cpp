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
const int N = 2e5 + 5;
int a[105];
int main()
{
    IOS
    int m,s;
    cin>>m>>s;
    // a is for min
    // b is for max
    if(m == 1 && s == 0)
    {
        cout<<"0 0";
        return 0;
    }
    else if(s == 0 || s > 9*m )
    {
        cout<<"-1 -1";
        return 0;
    }
    a[1] = 1;
    int rem = s-1;
    for(int i=m;i>=1;i--)
    {
        if(i > 1)
        {
            a[i] = min(9,rem);
            rem = rem - min(9,rem);
        }
        else
        {
            if(rem<=8 && rem > 0)
            {
                a[1] = a[1] + rem;
                rem = 0;
            }
        }
    }
    if(rem != 0)
    {
        cout<<"-1 -1";
        return 0;
    }
    for(int i=1;i<=m;i++)
        cout<<a[i];
    cout<<" ";
    rem = s;
    for(int i=1;i<=m;i++)
    {
        cout<<min(9,rem);
        rem -= min(9,rem); 
    }

    return 0;

}