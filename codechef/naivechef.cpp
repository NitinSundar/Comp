#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        double c1=0,c2=0,c = (double)n;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x == a) c1+=1.0;
            if(x == b) c2+=1.0;
        }
        cout<<setprecision(8);
        cout<<(c1*c2)/(c*c)<<"\n";
    }
    return 0;
}