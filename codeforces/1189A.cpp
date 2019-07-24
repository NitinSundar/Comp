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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ones = 0,zeroes = 0;
    for(inti=0;i<n;i++)
    {
        if(s[i] == '0') zeroes++;
        else ones++;
    }
    if(n == 1 || (ones != zeroes))
    {
        cout<<1<<endl;
        cout<<s;
        return 0;
    }
    else
    {
        cout<<2<<endl;
        cout<<s.substr(0,n-1)<<" "<<s[n-1]<<endl;
    }
    return 0;
}


