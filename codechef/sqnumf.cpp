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
int n;
lli a[110];

int main()
{
    IOS
    int T;
    cin>>T;
    while(T--)
    {
        int flag = 0;
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                lli g = __gcd(a[i],a[j]);
                if(g>1)
                {
                    cout<<g<<endl;
                    flag = 1;
                    break;
                }
            }
            if(flag)
                break;
        }
        if(flag)
            continue;
        for(int it = 1;it<=n;it++)
        {
            lli x = a[it];
            for(lli i=1;i*i*i<=x;i++)
            {
                if(i>1 && (x%(i*i)) == 0)
                {
                    cout<<i<<endl;
                    flag = 1;
                    break;
                }

                if(x%i == 0)
                {
                    lli p = x/i;
                    lli t = (lli)sqrt(p) + 1E-6;
                    
                    if(t>1 && t*t == p)
                    {
                        cout<<t<<endl;
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag)
                break;
        }
        
    }
    

    return 0;
}


