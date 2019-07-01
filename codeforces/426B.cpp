#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector <int> v[26];
    for(int i=0;i<n;i++){
        v[s[i]-'A'].push_back(i);
    }
    vector <pair<int,int> > vp;
    for(int i=0;i<26;i++){
        if(v[i].size()>0){
            vp.push_back(make_pair(v[i][0],v[i].back()));
        }
    }
    sort(vp.begin(),vp.end());
    int i;
    for( i=0;i<n;i++){
        int c=0;
        for(int j=0;j<vp.size();j++){
            if(i>=vp[j].first && i<=vp[j].second) c++;
        }
        if(c>k) break;
    }
    if(i==n) cout<<"NO";
    else cout<<"YES";
    return 0;
}
