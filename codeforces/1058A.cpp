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
    int c = 0,x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        c+=x;
    }
    if(c == 0)
    {
        cout<<"EASY";
    }
    else
        cout<<"HARD";
    return 0;

}
