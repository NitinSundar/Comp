#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int T;
 cin>>T;
 while(T--)
 {
  bool flag=true;
  int n,q;
  cin>>n>>q;
  map<pair<int,int> ,int> mp;
  map<pair<int,int> ,int>::iterator it;
  while(q--)
  {
    int i,j,val;
	cin>>i>>j>>val;
	it=mp.find({i,j});
	if(it==mp.end()) {
	mp[{i,j}]=val;
	  it=mp.find({j,i});
	  if(it==mp.end()) mp[{j,i}]=val;
	  else {
	    if(it->second !=val) flag=false;
	  }
	}
	else{
	 if(it->second !=val) flag=false;
	 it=mp.find({j,i});
	 if(it->second !=val) flag=false;
	}
	if(i==j && val==1) flag=false;


  }
  int y=1;
  for(int i=1;i<=n;i++) if(mp[{1,i}]!=0) {y=i;break;}
  for(int i=1;i<=n;i++)
  {

      if(i>1){
        if(mp[{1,i}]+ mp[{1,y}] == mp[{i,y}] || mp[{1,i}]- mp[{1,y}] == mp[{i,y}] ){

        }
        else flag=false;
      }
  }

  if(flag) cout<<"YES\n";
  else cout<<"NO\n";
 }
 return 0;
}
