#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define inf 10000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n;

int main()
{
    IOS
    int T=1;
    cin>>T;
    while(T--)
    {
        cin>>n;
        int s = 0,flag = 0,cnt = 0;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>100)
                flag = 1;
            else if(a[i]>0)
                cnt++;
            s = s + a[i];
        }
        if(flag == 0 && s>=100 && s-100<cnt)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    

    return 0;
}


