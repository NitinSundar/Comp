#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define BOOST ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    BOOST;
    int n,k;
    cin>>n>>k;
    string ch;
    cin>>ch;

    int a[26]={0};
    for(int i=0;i<n;i++) a[ch[i]-'a']++;
    int c=0;
    for(int i=0;i<26;i++){
        if(a[i]>0) c++;
    }
    bool flag=true;


        for(int i=0;i<26;i++){
            if(a[i]>k) flag=false;
        }


    if(flag) cout<<"YES";
    else cout<<"NO";
    return 0;
}
