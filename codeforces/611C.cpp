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
const int N = 777;
int hor[N][N],ver[N][N];
char s[N][N];
int main()
{
    IOS
    int h,w;
    cin>>h>>w;
    for(int i=0;i<h;i++)
    	cin>>s[i];
    for(int i=0;i<=h;i++)
    {
    	for(int j=0;j<=w;j++)
    	{
    		if(i == 0 || j == 0)
    			ver[i][j] = 0;
    		else
    		{
    			ver[i][j] = ver[i-1][j]+ver[i][j-1]-ver[i-1][j-1];
    			if(i<h && s[i-1][j-1]=='.' && s[i][j-1]=='.')
    				ver[i][j]++;
    		}
    		if(i == 0 || j == 0)
    			hor[i][j] = 0;
    		else
    		{
    			hor[i][j] = hor[i-1][j]+hor[i][j-1]-hor[i-1][j-1];
    			if(j<w && s[i-1][j-1]=='.' && s[i-1][j]=='.')
    				hor[i][j]++;
    		}
    	}
    }
    int tt;
    cin>>tt;
    while(tt--)
    {
    	int xa,ya,xb,yb;
    	cin>>xb>>yb>>xa>>ya;
    	int ans = 0;
    	ans += hor[xa][ya - 1] - hor[xb - 1][ya - 1] - hor[xa][yb - 1] + hor[xb - 1][yb - 1];
    	ans += ver[xa - 1][ya] - ver[xa - 1][yb - 1] - ver[xb - 1][ya] + ver[xb - 1][yb - 1];
    	cout<<ans<<endl;
    }
    return 0;

}