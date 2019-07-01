#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    int n,pos,l,r;
    cin>>n>>pos>>l>>r;
    int ans=1e9;
    if(l==1 && r==n) cout<<"0";
    else if(l==1)  cout<<abs(r-pos)+1;
    else if(r==n) cout<<abs(pos-l)+1;
    else
    {
        if(l<=pos && pos<=r)
        {
            cout<<min(pos-l+r-l+2,r-pos+r-l+2);
        }
        else if(pos<l) cout<<l-pos+1+r-l+1;
        else cout<<pos-r+1+r-l+1;
    }	
    return 0;
}

