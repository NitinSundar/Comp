#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fi first
#define se second
int main()
{
	lli n;
	cin>>n;
	lli k,c=0;
	cin>>k;
	vector<lli> a(n);
	map<lli,int> mp;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		mp[a[i]]++;
	}
	sort(a.begin(),a.end());
	lli j=n,y=0;
	for(auto it:mp)
    {
        lli o=it.se;
        c+=o*y;
        if(c>=k)
        {
            c-=o*y;
            for(int i=0;i<y;i++)
            {
                if(c+1<=k && k<=c+o)
                {
                    cout<<it.fi<<" "<<a[i];
                    return 0;
                }
                c+=o;
            }
        }
        c+=o*o;
        j-=o;
        if(c>=k)
        {
            cout<<it.fi<<" "<<it.fi;
            return 0;
        }
        c+=j*o;
        if(c>=k)
        {
            c-=j*o;
            for(int i=n-j;i<n;i++)
            {
                if(c+1<=k && k<=c+o)
                {
                    cout<<it.fi<<" "<<a[i];
                    return 0;
                }
                c+=o;
            }
        }
        y+=it.se;

    }
	return 0;
}
