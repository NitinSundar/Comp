#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    int k;
    cin>>k;
    if(k>36) {cout<<"-1";return 0;}
    int p=k/2 ;
    while(p--) cout<<"8";
    if(k%2) cout<<"9";
    return 0;
}