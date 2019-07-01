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
        int a=0,b=0,c=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x ==1) a++;
            else if(x ==2) b++;
            else c++;
            
        }
        while(a--) cout<<"0 ";
        while(b--) cout<<"1 ";
        while(c--) cout<<"2 ";
        cout<<"\n";
    }
	
	return 0;
}