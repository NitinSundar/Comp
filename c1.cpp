#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,m,x,mf=0;
        cin>>n>>m>>x;
        int w[n],c[n];
        for(int i=0;i<n;i++) cin>>w[i];
        for(int i=0;i<n;i++) cin>>c[i];
        vector<int> v;
        for(int i=0;i<n;i++) if(c[i]==1) v.push_back(w[i]);
        sort(v.begin(),v.end());
        if(v.size()==0){
            cout<<"-1\n";
            continue;
        }
        for(int i=2;i<=m;i++){
            set <int> s;
            int f1=1;
            for(int j=0;j<n;j++){
                if(c[j]==i){
                    for(int k=0;k<v.size();k++){
                        if(w[j]+v[k]<=x)
                        s.insert(w[j]+v[k]);
                    }
                }
            }
            v.clear();
            for(int i:s) v.push_back(i);
            if(s.size()==0){
                cout<<"-1\n";
                mf=1;
                break;
            }
        }
       if(mf==0) cout<<x-(v.back())<<endl;
    }
    return 0;
}
