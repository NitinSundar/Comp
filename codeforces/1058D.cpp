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
    lli n,m,k;
    cin>>n>>m>>k;
    lli num = n*m;
    num = num*2LL;
    if(num%k != 0)
    {
        cout<<"NO";
        return 0;
    }
    else
    {
        cout<<"YES\n";
        cout<<"0 0\n";
        lli ab = n*m,X,Y;
        lli a1 = 2LL*n,b1 = 2LL*m;
        int flag = 1;
        if(flag && n%k == 0)
        {
            X = n/k;
            Y = 2LL*m;
            if(X<=n && Y<=m)
            {
                flag = 0;
            }
            else if(X<=m && Y<=n)
            {
                swap(X,Y);
                flag = 0;
            }
        }
        if(flag && m%k == 0)
        {
            X = m/k;
            Y = 2LL*n;
            if(X<=n && Y<=m)
            {
                flag = 0;
            }
            else if(X<=m && Y<=n)
            {
                swap(X,Y);
                flag = 0;
            }
        }
        if(flag && 2%k == 0)
        {
            X = 2/k;
            Y = n*m;
            if(X<=n && Y<=m)
            {
                flag = 0;
            }
            else if(X<=m && Y<=n)
            {
                swap(X,Y);
                flag = 0;
            }
        }
        if(flag && ab%k == 0)
        {
            X = ab/k;
            Y = 2LL;
            if(X<=n && Y<=m)
            {
                flag = 0;
            }
            else if(X<=m && Y<=n)
            {
                swap(X,Y);
                flag = 0;
            }
        }
        if(flag && a1%k == 0)
        {
            X = a1/k;
            Y = m;
            if(X<=n && Y<=m)
            {
                flag = 0;
            }
            else if(X<=m && Y<=n)
            {
                swap(X,Y);
                flag = 0;
            }
        }
        if(flag && b1%k == 0)
        {
            X = b1/k;
            Y = n;
            if(X<=n && Y<=m)
            {
                flag = 0;
            }
            else if(X<=m && Y<=n)
            {
                swap(X,Y);
                flag = 0;
            }
        }
        if(flag && num%k == 0)
        {
            X = num/k;
            Y = 1;
            if(X<=n && Y<=m)
            {
                flag = 0;
            }
            else if(X<=m && Y<=n)
            {
                swap(X,Y);
                flag = 0;
            }
        }
        if(flag == 0)
        {
            cout<<X<<" 0\n";
            cout<<"0 "<<Y;
            return 0;
        }

    }
    cout<<"NO";
    return 0;

}
