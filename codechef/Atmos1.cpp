#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		vector <string> ans;
		int n,k;
		cin>>n>>k;
		int a[26]={0};
		for(int i=0;i<s.size();i++) a[s[i]-'a']=1;
		while(n--)
		{
			string temp;
			cin>>temp;
			int b[26]={0};
			for(int i=0;i<temp.size();i++) b[temp[i]-'a']=1;
			int c=0;
			for(int i=0;i<26;i++) if(a[i]==1 && b[i]==1 ) c++;
			if(c>=k) ans.push_back(temp);	
 		}
 		if(ans.size() == 0) cout<<"No\n";
 		else{
 			cout<<"Yes\n";
 			for(int i=0;i<ans.size();i++) cout<<ans[i]<<endl;
 		}
	}
	return 0;
}