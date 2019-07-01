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
    string s,ans;
    cin>>s;
    int i = 0,j= s.size()-1;
    int n = s.size();
    
    
        int flag = (n+1)%2;
        while(i<=j)
        {
            if(flag) ans = ans + s[j--];
            else ans = ans + s[i++];
            flag= 1-flag;
        }
    reverse(ans.begin(),ans.end());
    cout<<ans;
    return 0;

}