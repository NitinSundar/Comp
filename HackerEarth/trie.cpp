#include<bits/stdc++.h>
using namespace std;

int sz = 26;

struct trienode
{
	struct trienode* children[26];
	bool endofword;
};

struct trienode* getnode(void)
{
	struct trienode* pnode = new trienode;
	pnode->endofword = false;
	for(int i=0;i<26;i++)
		pnode->children[i] = NULL;
	return pnode;
}

void insert(struct trienode* root,string key)
{
	struct trienode* pcrawl = root;
	for(int i=0;i<key.size();i++)
	{
		int index = key[i] - 'a';
		if(pcrawl->children[index] == NULL)
			pcrawl->children[index] = getnode();
		pcrawl = pcrawl->children[index];
	}
	pcrawl->endofword = true;
}

bool search(struct trienode* root,string key)
{
	struct trienode* pcrawl = root;
	for(int i=0;i<key.size();i++)
	{
		int index = key[i] - 'a';
		if(pcrawl->children[index] == NULL)
			return false;
		pcrawl = pcrawl->children[index];
	} 
	return (pcrawl!=NULL && pcrawl->endofword);
}

int main()
{
	int n,m;
	cin>>n>>m;
	struct trienode* root = getnode();
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		insert(root,s);
	}
	while(m--)
	{
		string s;
		cin>>s;
		if(search(root,s))
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	

	return 0;
}