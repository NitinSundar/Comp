#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int a=min(s1.size(),s2.size());
	int b=max(s1.size(),s2.size());
	int count=0;
	for(int i=1;i*i<=a;i++)
	{
		string t;
		if(a%i == 0&&b%i==0)
		{
             t.append(s1,0,i);
             string t1,t2;
             for(int j=0;j<a;j=j+i)
             {
                  t1+=t;
             }
             for(int k=0;k<b;k=k+i)
             {
             	t2+=t;
             }
             //cout<<t1<<" "<<t2<<" ";
             if(t1==s1&&t2==s2)
             {
                  count++;
             }
		}
		if(i!=a/i && a%(a/i) == 0 && b%(a/i) == 0)
		{
			t.clear();
			t.append(s1,0,a/i);
             string t1,t2;
             for(int j=0;j<a;j=j+(a/i))
             {
                  t1+=t;
             }
             for(int k=0;k<b;k=k+(a/i))
             {
             	t2+=t;
             }
            // cout<<t1<<" "<<t2<<" ";
             if(t1==s1&&t2==s2)
             {
                  count++;
             }
		}
	}
	cout<<count;
	return 0;
}