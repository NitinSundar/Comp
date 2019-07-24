#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define inf 10000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e5 + 5;

int main()
{
    IOS
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int x[n],y[n],f1[n],f2[n],f3[n],f4[n];
        for(int i=0;i<n;i++)
            cin>>x[i]>>y[i]>>f1[i]>>f2[i]>>f3[i]>>f4[i];
        int mi = -100000,ma = 100000;
        int xmin,xmax,ymin,ymax;
        for(int i=0;i<n;i++)
        {
            if(i == 0)
            {
                if(f1[i] == 0) xmin = x[i];
                else xmin = mi;
                if(f3[i] == 0) xmax = x[i];
                else xmax = ma;
                if(f2[i] == 0) ymax = y[i];
                else ymax = ma;
                if(f4[i] == 0) ymin = y[i];
                else ymin = mi; 
            }
            else
            {
                int xl,xr;
                if(f1[i] == 0) xl = x[i];
                else xl = mi;
                if(f3[i] == 0) xr = x[i];
                else xr = ma;
                xmin = max(xl,xmin);
                xmax = min(xr,xmax);
                int yl,yr;
                if(f2[i] == 0) yr = y[i];
                else yr = ma;
                if(f4[i] == 0) yl = y[i];
                else yl = mi;
                ymin = max(yl,ymin);
                ymax = min(yr,ymax);
            }
        }
       // cout<<xmin<<" "<<xmax<<" "<<ymin<<" "<<ymax<<endl;
        if(xmin > xmax || ymin > ymax)
            cout<<"0"<<endl;
        else
            cout<<"1 "<<xmin<<" "<<ymin<<endl;
    }
    return 0;
}


