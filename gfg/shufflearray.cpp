#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main() 
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0,j=n/2;i<n/2;i++,j++)
            cout<<a[i]<<" "<<a[j]<<" ";
        cout<<"\n";
    }
	
	return 0;
}