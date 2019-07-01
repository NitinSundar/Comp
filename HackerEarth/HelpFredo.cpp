#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    double n;
    cin>>n;
    double a=0;
    for(double i=0;i<n;i++)
    {
        double x;
        cin>>x;
        a+=log10(x);
    }
    a=a/n;
    int a1=(int)a;
    cout<<(int)ceil(pow(10.0,a));
    return 0;
}
