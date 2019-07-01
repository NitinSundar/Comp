#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*string commonPrefix(string str1, string str2)
{
    string result;
    int n1 = str1.length(), n2 = str2.length();
 
    // Compare str1 and str2
    for (int i=0, j=0; i<=n1-1&&j<=n2-1; i++,j++)
    {
        if (str1[i] != str2[j])
            break;
        result.push_back(str1[i]);
    }
 
    return (result);
}
string fun(vector<string> &v1, int y)
{
    string prefix =  v1[0];
 
    for (int i=1; i<=y-1; i++)
        prefix = commonPrefixUtil(prefix, v1[i]);
 
    return (prefix);
}*/
int main()
{
	vector<string>ans;
	ll n;
	cin>>n;
	string s[n];
	for(int i = 0 ; i < n ; i++)
	{
		cin>>s[i];
		//ss[i] = s[i];
	}
	//sort(ss,ss+n);
	ll q,x;
	cin>>q;
	vector<string> v[q];
	string p;
	for(int j = 0 ; j < q; j++)
	{
		cin>>x>>p;
		string ans;
		int l = 0,r=0;
		vector<string> vvv;
		for(int i=0;i<x;i++)
		{
			r = 0;
			for(int k = 0;k<min(p.size(),s[i].size());k++)
			{
				if(s[i][k] == p[k]) r++;
				else break;
			}
			if(r > l)
			{
				l = r;
				ans = s[i];
			}
			if(l == r)
			{
				vector<string> vv;
				vv.push_back(ans);
				vv.push_back(s[i]);
				sort(vv.begin(),vv.end());
				ans = vv[0];
			}
			//cout<<ans<<"\n";
			vvv.push_back(s[i]);
		}
		if(ans.size()) cout<<ans<<"\n";
		else 
		{
			sort(vvv.begin(),vvv.end());
			cout<<vvv[0]<<"\n";
		}
	}
	
	/*for(int i = 0 ; i< q ; i++)
	{
		for(int j = 0 ; j < n ; j++)
		{
			v[i].push_back(s[j]);
		}

	}
	for(int i = 0 ; i < q ; i++)
	{
		v[i].push_back(p[i]);
	}
	for(int i = 0 ; i < q ; i++)
	{
		ans.push_back(fun(v[i],n+1));
	}*/





	return 0;
}