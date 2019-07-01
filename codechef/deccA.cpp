#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
   cin>>t;
   while(t--)
   {
      map<string,int> mp;
      int n;
      cin>>n;
      if(n==0)
      {
         cout<<"Draw\n";
         continue;
      }
      set<string> st;
      while(n--)
      {
         string s;
         cin>>s;

         mp[s]++;
         st.insert(s);
      }   
      set<string>::iterator it;
      it=st.begin();
      if(st.size() == 1)
      {
         cout<<*it<<endl;
        continue;
      }
      string s1=*it;
      it++;
      string s2=*it;
      if(mp[s1] == mp[s2]) cout<<"Draw";
      else if(mp[s1]>mp[s2]) cout<<s1;
      else cout<<s2;
      cout<<endl;

   }
   


   return 0;
}


