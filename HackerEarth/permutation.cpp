#include <iostream>
using namespace std;
typedef long long int lli;
int main()
{
    lli T;
    cin>>T;
    while(T--)
    {
        lli n;
        cin>>n;
        if(n<=1)
        {
            cout<<"1\n";
            continue;
        }
        cout<<((n*n)/2)-1<<"\n";
    }
    return 0;
}