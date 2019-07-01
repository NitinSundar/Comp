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
    int n;
    cin>>n;
    while(1)
    {
        int flag = 1;
        int s = n%10,j = n;
        while(j>0)
        {
            if(j%10 != s)
            {
                flag =0;
                break;
            }
            j=j/10;
        }
        if(flag)
        {
            cout<<n;
            return 0;
        }
        n++;
    }
    return 0;

}
