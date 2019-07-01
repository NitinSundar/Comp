#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int T=1;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,ans=0;
    cin>>n;
    int a[n];
    set<int> s;
    map<int,int> mp;
    //queue <int> v[n+1];
    for(int i=0;i<n;i++) s.insert(i+1);
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
        s.erase(a[i]);
      //  v[a[i]].push(i);
    }

    for(int i=0;i<n;i++){
        int j=a[i];
        if(mp[j]>1){
            auto it=s.begin();
            int x=*it;
            if(x<a[i]){
                a[i]=x;
                s.erase(x);
                mp[j]--;
                ans++;
            }
        }
    }
    for(int i=n-1;i>=0;i--){
        int j=a[i];
        if(mp[j]>1){
            auto it=s.end();
            it--;
            int x=*it;
            a[i]=x;
            s.erase(x);
            mp[j]--;
            ans++;
        }
    }
    cout<<ans<<endl;
    for(int i=0;i<n;i++) cout<<a[i]<<' ';
    return 0;
}
