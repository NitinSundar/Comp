#include <iostream>
#include <set>
using namespace std;
typedef long long int lli;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        set<int> s;
        int k=-1;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            if(s.count(x) == 0) s.insert(x);
            else k=x;
        }
        if(k!=-1)
        {

            cout<<k<<endl;;
            continue;
        }
        int x=*(s.begin());
        if(s.count(x+1) == 0) k=x;
        auto it=(s.end());
        it--;
        x=*it;

        if(s.count(x-1) == 0) k=x;
        cout<<k<<endl;

    }
    return 0;
}
