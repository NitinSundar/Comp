#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  sort(a,a+n);
  if(n==1)
  {
    cout<<"-1";
  }  
  else if(n==2)
  {
    int d=a[1]-a[0];
    if(d==0)
    {
      cout<<"1\n"<<a[0];
    }
    else if(d%2 == 0)
    {
      cout<<"3\n";
      cout<<a[0]-d<<' '<<a[0]+(d/2)<<' '<<a[1]+d;
    }
    else
    {
      cout<<"2\n"<<a[0]-d<<' '<<a[1]+d;
    }
  }
  else
  {
    map<int,int> mp;
    map<int,int>::iterator it;
    for(int i=1;i<n;i++) mp[a[i]-a[i-1]]++;
    if(mp.size() == 1)
    {
      it=mp.begin();
      int d=it->first;
      if(d==0) cout<<"1\n"<<a[0];
      else cout<<"2\n"<<a[0]-d<<' '<<a[n-1]+d;
    }  
    else if(mp.size() == 2)
    {
      it=mp.begin();
      int x1=it->first,y1=it->second;
      it++;
      int x2=it->first,y2=it->second;
      if(y1==n-2 && y2==1 && 2*x1==x2)
      {
        int d=x2/2;
        cout<<"1\n";
        for(int i=1;i<n;i++)
        {
          if(a[i]-a[i-1] == x2) {cout<<a[i-1]+d;break;}
        }
      }
      else
      {
        cout<<"0";
      }
    }
    else cout<<"0";
  }
	return 0;
}