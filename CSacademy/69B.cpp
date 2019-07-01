#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    int n,l=-1,r=-1;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<n;i++)
    {
        if(a[i] > a[i+1])
        {
            int j;
            for(j=i-1;j>=1;j--)
            {
                if(a[j] != a[i])
                {
                    l=j+1;
                    break;
                }
            }
            if(j==0) l=1;
            for(j=i+2;j<=n;j++)
            {
                if(a[j]<=a[j-1]) continue;
                else
                {
                    r=j-1;
                    break;
                }
            }
            if(j>n) r=n;
            break;
        }
    }
    //cout<<l<<r;
    int f=0;
    if(l == -1 && r == -1)
    {
            long long int res = 0;
        for(int i=1,j; i<=n; i=j){
            for(j=i; j<=n && a[j] == a[i]; j++);
            res += (j-i) * (j-i+1LL)/2;
        }
        cout << res << endl << "1 1" << endl;
        return 0;
        
    }
    else
    {
        for(int i=l,j=r;i<=j;i++,j--)
        {
            int t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
        for(int i=1;i<n;i++)
        {
            if(a[i]>a[i+1])
            {
                f=1;
                break;
            }
        }
        if(f)
            cout<<"0";
        else
        {
            cout<<"1\n";
            cout<<l<<" "<<r;
        }
    }
    return 0;
}