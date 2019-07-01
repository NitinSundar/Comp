#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		lli x,y;
		cin>>x>>y;
		lli a=0,b=0;
		int l=s.size();
		for(int i=0;i<l;i++)
		{
			if(s[i]=='a')a++;
			else b++;
		}

        if(a*y >= b*x)
		{
		    lli n1=a/x;
		    if(a%x!=0) n1++;
		    lli n2=b/n1;
		    lli nx=(b%n1);
		    lli ny=n1-nx;
		    //cout<<nx<<ny<<n1<<n2;
		    while(a>0)
            {
                for(int i=0;i<x && a>0;i++) {cout<<"a";a--;}
                	if(b==0) nx=0,ny=0;
                if(nx>0){
                    for(int i=0;i<=n2 && b>0;i++) {cout<<"b";b--;}
                    nx--;
                    //if(b==0) nx=0,ny=0;
                }
                else if(ny>0)
                {
                	for(int i=0;i<n2 && b>0;i++) {cout<<"b";b--;}
                    ny--;
                	//if(b==0) nx=0,ny=0;
                }
                else
                {

                	if(b==0 && a!=0) cout<<"*";
                	//cout<<"*";
                }
            }
		}
		else
		{
			lli n1=b/y;
			if(b%y!=0) n1++;
		    lli n2=a/n1;
		    lli nx=(a%n1);
		    lli ny=n1-nx;
		    while(b>0)
            {
                for(int i=0;i<y && b>0;i++) {cout<<"b";b--;}
                	if(a==0) nx=0,ny=0;
                if(nx>0){
                    for(int i=0;i<=n2 && a>0;i++) {cout<<"a";a--;}
                    nx--;
                    //if(a==0) nx=0,ny=0;
                }
                else if(ny>0)
                {
                	for(int i=0;i<n2 && a>0;i++) {cout<<"a";a--;}
                    ny--;
                	//if(a==0) nx=0,ny=0;
                }
                else
                {

                	if(a==0 && b!=0) cout<<"*";
                	//cout<<"*";
                }
            }	
		}
        cout<<endl;
	}
	return 0;
}
