#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define inf 10000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 3e3 + 5;
lli n,k;
lli check(lli x){
	lli c = (x*(x+1))/2;
	lli f = c - k;
	return (f+x - n);

}
int main()
{
    IOS
    cin>>n>>k;
    lli l=1,h=n,mid;
    while(l<=h){
    	mid = (l+h+1)/2;
    	lli t = check(mid);
    	if(t == 0){
    		cout<<(mid*(mid+1))/2 - k;
    		return 0;
    	}
    	else if(t > 0)
    		h = mid;
    	else
    		l = mid;
    	//cout<<mid<<endl;
    }
    return 0;
}


