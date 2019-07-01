#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define fi first
#define se second
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	IOS
	set<int>s,temp;
    int n,k;
    cin>>n>>k;
    int number;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>number;
        a[i]=number;
        s.insert(number);
    }
    for(int i=2;i<=k;i++){
        for(int j=0;j<n;j++){
            for(auto ti=s.begin();ti!=s.end();ti++){
                temp.insert(a[j]|*ti);
            }
        }
        s.clear();
        s=temp;
        temp.clear();
    }
    cout<<s.size()<<endl;
	return 0;
}