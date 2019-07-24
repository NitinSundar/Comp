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
string s1,s2,s3;
void pre()
{
    for(int i=0;i<1;i++)
    {
        s1=s1+"RGB";
        s2=s2+"GBR";
        s3=s3+"BRG";
    }
}
int main()
{
    IOS
    pre();
    int T;
    cin>>T;
    while(T--)
    {
        int n,k;
        cin>>n>>k;
        int pre1[n+1],pre2[n+1],pre3[n+1];
        string s;
        cin>>s;
        pre1[0] = pre2[0] = pre3[0] = 0;
        for(int i=0;i<n;i++)
        {
            pre1[i+1] = pre1[i] + (s1[i%3]!=s[i]);
            pre2[i+1] = pre2[i] + (s2[i%3]!=s[i]);
            pre3[i+1] = pre3[i] + (s3[i%3]!=s[i]);
        }
        int ans = 1e9;
        for(int i=k;i<=n;i++)
        {
            ans = min(ans,pre1[i]-pre1[i-k]);
            ans = min(ans,pre2[i]-pre2[i-k]);
            ans = min(ans,pre3[i]-pre3[i-k]);
        }
        cout<<ans<<endl;
    }
    return 0;
}


