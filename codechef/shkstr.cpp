#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define pb push_back
#define mp make_pair
#define vi vector<ll>
const int N = 26;
string ans;
struct trienode
{
	struct trienode *children[N];
	vector<pair<string,int> > v;
};
vector<string> finalans;
struct trienode* getnode()
{
    struct trienode* pnode = new trienode;
    pnode->v.clear();
    for(int i=0;i<26;i++)
    {
    	pnode->children[i] = NULL;
    }
    return pnode;
}

void insert(struct trienode* root,string key,int ind)
{
	struct trienode *pcrawl = root;
	for(int i=0;i<key.size();i++)
	{
		int index = key[i]-'a';
		if(!pcrawl->children[index])
			pcrawl->children[index] = getnode();
		pcrawl = pcrawl->children[index];
		pcrawl->v.push_back(make_pair(key,ind));
	}
}

string func2(string a,string b)
{
	vector<string> fgh;
	fgh.push_back(a);
	fgh.push_back(b);
	sort(fgh.begin(),fgh.end());
	return fgh[0];
}
vector<pair<string,int> > vv,vvv;
string func(struct trienode* root,string key,int r)
{
	stack<struct trienode*> st;
	struct trienode* pcrawl = root;
	st.push(pcrawl);
	for(int i=0;i<key.size();i++)
	{
		int index = key[i]-'a';
		if(pcrawl->children[index]!=NULL)
			st.push(pcrawl->children[index]);
		else
			break;
		pcrawl = pcrawl->children[index];
	}
	while(st.size()>1)
	{
		pcrawl = st.top();
		st.pop();
		vector<pair<string,int> > vp = pcrawl->v;
		for(int i=0;i<vp.size();i++)
		{
			if(vp[i].second<=r)
				return vp[i].first;
		}
	}
	return finalans[r];
	
}
int main()
{	
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	struct trienode *root = getnode();
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		vv.push_back(make_pair(s,i));
		if(i == 0)
			finalans.push_back(s);
		else
		{
			finalans.push_back(func2(s,finalans[i-1]));
		}
	}
	vvv = vv;
	sort(vvv.begin(),vvv.end());
	for(int i=0;i<n;i++)
	{
		insert(root,vvv[i].first,vvv[i].second);
	}
	int q;
	cin>>q;
	while(q--)
	{
		int r;
		string s;
		cin>>r>>s;
		//cout<<func(root,s,r-1)<<"\n";
		string ans = func(root,s,r-1);
		//if(ans.size())
			if(ans.size())	cout<<ans<<"\n";
			else 	cout<<finalans[r-1]<<"\n";
	}
	return 0;
}