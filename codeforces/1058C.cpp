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
    int n,sum = 0;
    cin>>n;
    string s;
    cin>>s;
    int a[n];
    for(int i=0;i<n;i++)
    {
        a[i] = s[i]-'0';
        sum=sum+a[i];
    }
    if(sum == 0)
    {
        cout<<"YES";
        return 0;
    }
    vector<int> v;
    for(int i=1;i<=sum/2;i++)
    {
        if(sum%i == 0)
        {
            v.pb(i);
        }
    }
    for(int i=0;i<v.size();i++)
    {
        int x = v[i],y=0,j;
        for(j=0;j<n;j++)
        {
            y = y + a[j];
            if(y>=x)
            {
                if(y == x)
                {
                    y = 0;
                    continue;
                }
                if(y > x)
                    break;
            }
        }
        if(j == n && y == 0)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;

}
