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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int j = 0,k=1;;
    for(int i=0;j<n;)
    {
        cout<<s[j];
        j = j + k;
        k++;
    }

    return 0;

}