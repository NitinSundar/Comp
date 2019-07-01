#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        double n,k,x,d;
        cin>>n>>k>>x>>d;
        double s=0.0;
        for(int i=0;i<n;i++){
            double j;
            cin>>j;
            double val=(x/100.0);
            val=val*(j);
            //cout<<val<<endl;
             s=s+max(val,k);

        }
        //cout<<s<<endl;
        if(s>d) cout<<"upfront\n";
        else cout<<"fee\n";
    }
    return 0;
}
