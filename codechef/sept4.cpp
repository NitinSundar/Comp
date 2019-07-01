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
int n;

int main()
{
    IOS
    int T=1;
    while(T--)
    {
        cin>>n;
        if(n==1)
        {
            cout<<"1\n1";
            return 0;
        }
       int ans1[n+1],ans2[n+1];
       ans2[1] = n;
       for(int i=2;i<=n;i++)
            ans2[i] = i-1;
        int ind = n/2 , x = 2;
        ans1[ind] = 1;
        for(int i=1;i<ind;i++)
            ans1[i] = x++;
        ans1[n] = x++;
        for(int i=ind+1;i<n;i++)
            ans1[i] = x++;
        for(int i=1;i<=n;i++) cout<<ans1[i]<<" ";
        cout<<endl;
        for(int i=1;i<=n;i++) cout<<ans2[i]<<" ";
    }
    

    return 0;
}


