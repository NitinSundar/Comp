#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e5 + 5 ;
int a[N];
int pref[N];
struct trie
{
    trie* bit[2];
    int countchild[2];
};
trie* root;
void insert(lli k)
{
    trie* node = root;
    for(int i=0;i<=60;i++)
    {
        lli curbit = k & (1LL<<(60-i));
        if(curbit > 0)
            curbit = 1;
        if(node->bit[curbit] == NULL)
            node->bit[curbit] = new trie();
        node->countchild[curbit]++;
        node = node->bit[curbit];
    }
}
lli query(lli pref,lli k)
{
    trie* node = root;
    lli ans = 0;
    for(int i=0;i<=60;i++)
    {
        for(int i=0;i<=60;i++)
    {
        lli curbit1=pref & (1LL<<(60-i));
        lli curbit2=k & (1LL<<(60-i));
        if((!curbit1) && (!curbit2))
        {
            if(node->bit[0]==NULL)
            {
                return ans;
            }
            node=node->bit[0];
        }
        else if((!curbit1) && (curbit2))
        {
            ans+=node->countchild[0];
            if(node->bit[1]==NULL)
                return ans;
            node=node->bit[1];
        }
        else if((curbit1) && (!curbit2))
        {
            if(node->bit[1]==NULL)
                return ans;
            node=node->bit[1];
        }
        else
        {
            ans+=node->countchild[1];
            if(node->bit[0]==NULL)
                return ans;
            node=node->bit[0];
        }
    }
    }
    return ans;
}
int main()
{
    IOS;
    int T;
    cin>>T;
    while(T--)
    {
        root = new trie();
        insert(0);
        lli n,k;
        cin>>n>>k;
        lli ans = 0;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        for(int i=1;i<=n;i++)
            pref[i] = pref[i-1]^a[i];
        for(int i=1;i<=n;i++)
        {
            lli ct = query(pref[i],k);
            insert(pref[i]);
            ans+=ct;
        }
        cout<<ans<<endl;
    }
    return 0;
}