#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main() 
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,k,x;
        cin>>n>>k;
        int a[n];
        multiset<int> ms;
        for(int i=0;i<k;i++)
        {
            cin>>a[i];
            ms.insert(a[i]);
        }
        auto it = ms.end();
        it--;
        cout<<*it<<" ";
        for(int i=k;i<n;i++)
        {
            
            cin>>a[i];
            ms.erase(a[i-k]);
            ms.insert(a[i]);
            auto it = ms.end();
        it--;
        cout<<*it<<" ";
        }
        cout<<"\n";
        
    }
    
    return 0;
}