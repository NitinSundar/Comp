#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    
    cin>>n>>k;
    if(k<=1)
    cout<<n<<endl;
    else
    {
        for(int i=0;;i++)
        {
            long long s=pow(2,i)-1;
            if(s>=n)
            {
                cout<<s<<endl;
                break;
            }
        }
    }
}