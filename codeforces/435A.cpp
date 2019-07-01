#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int T=1;
int main()
{
    int n,x;
    cin>>n>>x;
    int a[105]={0};
    int ma=-1,ans=0;
    int c=0;
    for(int i=0;i<n;i++){
        int j;
        cin>>j;
        if(j<x) ans++;
        if(j==x) c=1;

    }
    cout<<(x-ans+c);

    return 0;
}
