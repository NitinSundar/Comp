#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
map <pair<int,int>,int> mp;
int main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,q;
    cin>>n>>q;
    int a[n];
    map <int,int> num;
    set <int> st;
    set<int>::iterator it1;
    set<int>::iterator it2,it;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        st.insert(a[i]);
    }
    for(it=st.begin();it!=st.end();it++){
        int x=*it;
        int ans=0;
        for(int i=0;i<n;i++){
            if(a[i]==x) ans++;
        }
        for(int l=2;l<=n;l++){
                int x1=0;
            for(int i=0;i<l;i++){
                if(a[i]==x) x1++;
            }
            if(x1>0) ans++;
            for(int i=l;i<n;i++){
                if(a[i-l]==x) x1--;
                if(a[i]==x) x1++;
                if(x1>0) ans++;
            }
        }
        num[x] = ans;
    }
    for(it1=st.begin();;){
            it=it1;
            it++;
        for(it2 = it1;it2!=st.end();it2++){
            int x=*it1,y=*it2;
            int x1=0,y1=0,ans=0;
        for(int i=0;i<n;i++){
            if(a[i]==x) x1++;
            if(a[i]==y) y1++;
            if(x1==y1) ans++;
            x1=0;y1=0;
        }
        for(int l=2;l<=n;l++){
            x1=0;y1=0;
            //cout<<ans<<endl;
            for(int i=0;i<l;i++){
                if(a[i]==x) x1++;
                if(a[i]==y) y1++;
            }
            if(x1==y1) ans++;
            for(int i=l;i<n;i++){
                if(a[i-l]==x) x1--;
                if(a[i-l]==y) y1--;
                if(a[i]==x) x1++;
                if(a[i]==y) y1++;
                if(x1==y1) ans++;
            }
        }
        mp[{x,y}]=ans;
        mp[{y,x}]=ans;
        }
        it1++;
        if(it1==st.end()) break;
    }
    while(q--)
    {
        int x,y;
        lli ans=0;
        cin>>x>>y;
        if(mp[{x,y}]!=0){
            cout<<mp[{x,y}]<<"\n";
            continue;
        }
        if(st.count(x)==0 && st.count(y)==0){
            cout<<(n*(n+1))/2<<endl;
            mp[{x,y}]=(n*(n+1))/2;
            continue;
        }
        else{
                int p;
            if(st.count(x)==0) p=x;
        else p=y;
        int ans=((n+1)*n)/2;
        ans=ans-num[p];
        cout<<ans<<"\n";
        }

    }
    return 0;
}
