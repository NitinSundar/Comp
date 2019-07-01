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
    int oo,pp;
    cin>>oo>>pp;
    string a,b;
    cin>>a>>b;
    stack<char> n,m,n1,n2;
    for(int i=0;i<a.size();i++)
    	n.push(a[i]);
    for(int j=0;j<b.size();j++)
    	m.push(b[j]);
    while(!n.empty() && !m.empty())
    {
    	if(n.top() == m.top())
    	{
    		n.pop();
    		m.pop();
    	}
    	else if(n.top() == '*')
    		break;
    	else
    	{
    		cout<<"NO";
    		return 0;
    	}
    }
    while(!n.empty())
    {
    	n1.push(n.top());
    	n.pop();
    }
    while(!m.empty())
    {
    	n2.push(m.top());
    	m.pop();
    }
    n = n1;
    m = n2;
    while(!n.empty() && !m.empty())
    {
    	if(n.top() == m.top())
    	{
    		n.pop();
    		m.pop();
    	}
    	else if(n.top() == '*')
    		break;
    	else
    	{
    		cout<<"NO";
    		return 0;
    	}
    }
    if(n.top() != '*') cout<<"NO";
    else cout<<"YES";
    return 0;
}