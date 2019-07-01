#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int taken[n];
    for(int i=0;i<n;i++)
    	taken[i] = 0;
    int req = (n-k)/2;
    stack<int> st;
    for(int i=0;i<n;i++)
    {
    	if(st.empty() || s[i] == '(')
    	{
    		st.push(i);
    	}
    	else
    	{
    		if(req > 0)
    		{
    			if(s.empty() == 0 && s[st.top()] == '(')
    			{
    				st.pop();
    				req--;
    				continue;
    			}
    		}
    		st.push(i);
    	}
    }
    while(!st.empty())
    {
    	taken[st.top()] = 1;
    	st.pop();
    }
    for(int i=0;i<n;i++)
    	if(taken[i])
    		cout<<s[i];
    return 0;
}