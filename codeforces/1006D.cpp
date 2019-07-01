#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    IOS
    int n;
    string a,b;
    cin>>n>>a>>b;
    int ans = 0;
    for(int i=1;i<=n/2;i++)
    {
        set<char> st;
        int j = n-i+1;
        st.insert(a[i-1]);
        st.insert(b[i-1]);
        st.insert(a[j-1]);
        st.insert(b[j-1]);
        if(st.size() > 2)
            ans+=(st.size() - 2);
        if(st.size() == 3 && a[i-1] == a[j-1])
            ans+=1;
        if(st.size() == 2)
        {
            set<char>::iterator it = st.begin();
            char ch = *it;
            lli cnt = 0;
            if(ch == a[i-1])
                cnt++;
            if(ch == b[i-1])
                cnt++;
            if(ch == b[j-1])
                cnt++;
            if(ch == a[j-1])
                cnt++;
            if(cnt == 1||cnt == 3)
                ans++;
        }
    }
    if(a.size() % 2 == 1)
    {
        ans+=(a[n/2] != b[n/2]);
    }
    cout<<ans;
    return 0;
}