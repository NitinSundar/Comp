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
        lli n,x1,y1,x2,y2;
        cin>>n>>x1>>y1>>x2>>y2;
        if(y1==y2 ) cout<<"Draw\n";
        else if(abs(n-y1)>=abs(n-y2)) cout<<"Salva\n";
        else cout<<"Miron\n";
    }
    return 0;
}
