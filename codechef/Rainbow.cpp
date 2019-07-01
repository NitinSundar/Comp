#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        bool flag=true;
        for(int i=0;i<n;i++) {
                cin>>a[i];
                if(i>0){
                    if(a[i]-a[i-1]>1) flag=false;
                }
        }
        for(int i=0,j=n-1;i<=j;i++,j--) if(a[i]!=a[j]) flag=false;
        if(flag) cout<<"yes\n";
        else cout<<"no\n";
    }
    return 0;
}
