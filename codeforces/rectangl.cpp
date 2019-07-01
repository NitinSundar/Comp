#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==b){
        	if(c==d)
        		cout<<"Yes";
        }else
        if(a==c){
        	if(b==d)
        		cout<<"Yes";
        }else 
        if(a==d){
        	if(c==b)
        		cout<<"Yes";
        }else
          cout<<"No";
    }
	return 0;
}