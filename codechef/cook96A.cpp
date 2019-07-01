#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
 {  
    int t;
    cin>>t;
	while(t--)
    {
    	int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0,j=1;i<n && j<n ;i+=2,j+=2)
        {
            char c = s[i];
            s[i] = s[j];
            s[j] = c;
        }
        for(int i=0;i<n;i++)
        {
            int a = s[i]-97;
            a = 25 - a;
            s[i] = (char)(a+97);
        }
        cout<<s<<"\n";
    	
	}
	return 0;
}