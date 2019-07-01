#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n,k;
string s;
int work(char ch)
{
    int l = 0,cur =0,ans = 0;
    for(int r = 0;r<n;r++)
    {
        cur = cur + (s[r]!=ch);
        while(cur > k)
        {
            cur = cur - (s[l]!=ch);
            l++;
        }
        ans = max(ans,r-l+1);
    }
    return ans;
}
int main()
{
    IOS
    cin>>n>>k>>s;
    int ans = max(work('a'),work('b'));
    cout<<ans;
    return 0;
}