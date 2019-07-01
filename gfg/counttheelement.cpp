#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main() 
{
    int T;
    cin>>T;
    
    while(T--)
    {
        int s[100005] = {0};
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            s[b[i]]++;
        }
        for(int i=1;i<100005;i++) s[i]+= s[i-1] ;
        for(int i=0;i<n-1   ;i++)
            cout<<s[a[i]]<<",";
        cout<<s[a[n-1]]<<"\n";
    }
	
	return 0;
}