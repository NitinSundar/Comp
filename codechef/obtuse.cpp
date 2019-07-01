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
        lli k,a,b;
        cin>>k>>a>>b;
        if(a>b) swap(a,b);
        lli temp=a-1;
        b=b-temp;
        a=1;
        if(k%2==0){
            if(b==(k/2)+1) b=1;
            else if(b>(k/2)+1) b=k+2-b;
        }
        else{
            if(b>(k/2)+1) b=k+2-b;
        }
        if(a==b) cout<<"0\n";
        else cout<<b-a-1<<endl;
    }
    return 0;
}
