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
		set<int> st;
		int a[10]={0};
		for(int i=0;i<s.size();i++){
            a[s[i]-48]++;
		}
		for(int i=65;i<=90;i++)
        {
            if( i%10 != i/10 && a[i%10]>0 && a[i/10]>0) st.insert(i);
            else if(i%10==i/10 && a[i%10]>1) st.insert(i);
        }
        for(auto it=st.begin();it!=st.end();it++) printf("%c",(*it));
        cout<<"\n";
        st.clear();
	}
	return 0;
}
