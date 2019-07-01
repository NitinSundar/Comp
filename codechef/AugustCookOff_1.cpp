#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        double n,v1,v2,s1=0,s2=0;
        cin>>n>>v1>>v2;
        double l1=sqrt(2)*n;
        double l2=2*n;
        l1=l1/v1;
        l2=l2/v2;
        if(l1<=l2) cout<<"Stairs\n";
        else cout<<"Elevator\n";
    }
    return 0;
}
