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
    int Q;
    cin>>Q;
    while(Q--){
        int n,m;
        cin>>n>>m;
        string s[n];
        for(int i=0;i<n;i++)
        cin>>s[i];
        int f[n][m];
        for(int i=0;i<n;i++)
        	for(int j=0;j<m;j++)
        		f[i][j] = (s[i][j] == '*');
        vector<int> row(n,0),col(m,0);
        for(int i=0;i<n;i++)
        {
        	int  cc = 0;
        	for(int j=0;j<m;j++)
        	{
        		cc+=f[i][j];
        	}
        	row[i]  = cc;
        }	        
        for(int i=0;i<m;i++)
        {
        	int cc = 0;
        	for(int j=0;j<n;j++)
        	{
        		cc+=f[j][i];
        	}
        	col[i] = cc;
        }
        int ans = 1e8;
        for(int i=0;i<n;i++)
        {
        	for(int j=0;j<m;j++)
        	{
        		if(f[i][j])
        			ans = min(ans , n - row[i] + m - col[j]);
        		else
        			ans = min(ans , n - row[i] + m - col[j]-1);
        	}
        }
        cout<<ans<<endl;
    }
    return 0;
}


