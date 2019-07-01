#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
vector<int> v1,v2,v3;
multiset <int> arr;
int n,m;
int destroyall()
{

    arr.clear();
    int ans=0;
    for(int i=0;i<v3.size();i++) arr.insert(v3[i]);
    multiset<int>::iterator it;
    ///first destroy all DEF cards
    for(int i=0;i<v2.size();i++){
        it=arr.upper_bound(v2[i]);
        if(it==arr.end()) return ans;
        arr.erase(it);
    }
    ///now target all ATK cards, or return 0 if not possible
    for(int i=0;i<v1.size();i++){
        it=arr.lower_bound(v1[i]);
        if(it==arr.end()) return 0;
        ans+=(*it)-v1[i];
        arr.erase(it);
    }
     ///now all of jiro's cards are destroyed, so add remaining ciel's cards
    it=arr.begin();
    while(it!=arr.end())
    {
        ans+=(*it);
        it++;
    }
    return ans;
}
int possible(int cnt)
{

    ///returns 0 if not possible

    ///ciel[] has been sorted in non-increasing order
    int ans=0;
    for(int i=0;i<cnt;i++)
    {
        if(v1[i] > v3[i]) return 0;
        ans+=(v3[i]-v1[i]);
    }
    return ans;
}
int dontDestroyAllCards()
{
    ///in this case, we attack some particular number of jiro's ATK cards
    ///and leave the DEF cards alone
    int ans=0;
    for(int cnt=1;cnt<=v1.size() && cnt<=v3.size();cnt++)
        ans=max(ans,possible(cnt));
    return ans;
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        string s;
        int j;
        cin>>s>>j;
        if(s=="ATK") v1.push_back(j);
        else v2.push_back(j);
    }
    for(int i=1;i<=m;i++){
        int j;
        cin>>j;
        v3.push_back(j);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    sort(v3.begin(),v3.end(),greater<int>());

    ///there are two scenarios - either we destroy all defense cards or none of them
    ///and we will destroy all defense cards iff it is possible to destroy all of jiro's
    ///cards, not otherwise

    int ans=0;
    ans=max(ans,destroyall());
    ans=max(ans,dontDestroyAllCards());
    cout<<ans;

    return 0;
}
