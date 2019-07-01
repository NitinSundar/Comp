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
    int T;
    cin>>T;
    while(T--)
    {
    	int D;
    	cin>>D;
    	int a[32]= {0};
    	while(D--)
    	{
    		int x,y;
    		cin>>x>>y;
    		a[x] = y;
    	}
    	for(int i=1;i<32;i++)
    		a[i] = a[i-1] + a[i];
    	int q;
    	cin>>q;
    	while(q--)
    	{
    		int x,y;
    		cin>>x>>y;
    		if(a[x] >= y)
    			cout<<"Go Camp\n";
    		else
    			cout<<"Go Sleep\n";
    	}
    }
    return 0;

}