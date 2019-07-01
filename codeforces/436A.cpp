#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int T=1;
int w[105]={0};
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    int flag=1;
    cin>>n;
    map<int,int> mp;
    set <int> s;
    for(int i=0;i<n;i++){
        int j;
        cin>>j;
        s.insert(j);
        mp[j]++;

    }
    if(s.size()!=2) flag=0;
    else{
            int k=0;
        for(auto it=s.begin();it!=s.end();it++){
            k+=mp[*it];
            if(mp[*it]*2!= n) flag=0;
        }
        if(k!=n) flag=0;
    }
    if (flag){
        cout<<"YES\n";
        for(auto it=s.begin();it!=s.end();it++){
            cout<<*it<<" ";
        }
    }
    else cout<<"NO";
    return 0;
}
