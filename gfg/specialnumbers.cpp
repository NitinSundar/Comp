#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main() 
{
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T;
    cin>>T;
    vector<lli> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    int i = 1;
    while(v.size() <= 100000)
    {
      lli x = v[i];
      v.push_back(x*10 + 0);
      v.push_back(x*10 + 1);
      v.push_back(x*10 + 2);
      v.push_back(x*10 + 3);
      v.push_back(x*10 + 4);
      v.push_back(x*10 + 5);
      i++;
    }
    while(T--)
    {
      int n;
      cin>>n;
      cout<<v[n-1]<<endl;
    }   
    return 0;
}