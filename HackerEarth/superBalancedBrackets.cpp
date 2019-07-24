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
const int N = 3e3 + 5;

int main()
{
    IOS
    int T;
    cin>>T;
    while(T--){
    	string s;
    	cin>>s;
    	int ans=-1,open = 0,close = (s.size())/2;
    	for(int i=0;i<s.size();i++){
    		if(s[i] == '(')
    			open++;
    		else
    			close--;
    		if(open<=close)
    			ans=max(ans,open+open);
    	}
    	cout<<ans<<endl;
    }
    return 0;
}


