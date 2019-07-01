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
const int N = 1e6;
int main()
{
    IOS
    int zeroes,ones;
    cin>>zeroes>>ones;
    string s;
    if(!(zeroes-1 <= ones &&  ones <= 2*zeroes + 2))
    {
        cout<<"-1";
        return 0;
    }
    if(zeroes*2 + 2 == ones)
    {
        cout<<"11";
        ones-=2;
    }
    else if(zeroes*2 + 1 == ones)
    {
        cout<<"1";
        ones--; 
    }
    while(zeroes || ones)
    {
        if(ones == zeroes + zeroes)
        {
            while(zeroes--)
                cout<<"011";
            break;
        }
        else if(zeroes == ones)
        {
            
            while(zeroes--)
            {
                cout<<"01";
            }
            break;
        }
        else if(zeroes && ones)
        {
            zeroes--;
            ones--;
            cout<<"01";
        }
        else if(ones)
        {
            while(ones--) cout<<"1";
            break;
        }
        else
        {
            while(zeroes--) cout<<"0";
            break;
        }
    }
    
    return 0;

}