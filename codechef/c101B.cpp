#include<iostream>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define inf 10000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
lli po(lli x,lli y)
{
    if(y == 0)
        return 1;
    lli a = po(x,y/2);
    a = (a*a)%mod;
    if(y%2)
        a = (a*x)%mod;
    return a%mod;
}
int main()
{
    IOS
    int T = 1;
    cin>>T;
    while(T--)
    {
    	string n;
        cin>>n;
        int y = n.size();
        string s =""; 
        char c= n[n.size()-1];s = s+c;
        for(int i=0;i<n.size()-1;i++) s=s+n[i];
        lli x = po((lli)10,(lli)y);
        lli xx = po((lli)10,(lli)(y-1));
        lli z = po((lli)10,mod - 2);
        lli val = 0;
        lli t = 1;
        for(int i = s.size() - 1 ;i>=0;i--)
        {
            lli j = s[i]-'0';
            val = val + (j*t)%mod;
            val=val%mod;
            t=t*10;
            t=t%mod;
        }
        lli ans = val;
        lli hey = 1;
        
        for(int i = n.size()-2;i>=0;i--)
        {
            lli s = (hey*x)%mod;
            lli h = n[i]-48;
            lli a = val - h;
            if(a<0) a=a+mod;
            a = (a*z)%mod;
            a = a+ (h*xx)%mod;
            ans = ans + (s*a)%mod;
           // cout<<s<<" "<<a<<endl;
            val = a%mod;
            ans = ans%mod;
            hey = (hey*x)%mod;
        }
        cout<<(ans+mod)%mod<<"\n";

    }
    return 0;

}