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

int main()
{
    IOS
    string st;
    cin>>st;
	for (int l=0;l<st.size();l++)
    for (int r=l;r<=st.size();r++)
    {
        temp="";
        for (int j=0;j<st.size();j++)
         if (j<l||j>=r) temp+=st[j];
        if (temp=="CODEFORCES")ans=1;
        
    }
    if(ans) cout<<"YES";
    else cout<<"NO";
    return 0;

}



