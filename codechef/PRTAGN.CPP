#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define inf 10000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e6 + 5;
int bits[N];
void pre(){
  for(int i=1;i<N;i++){
    int c = 0,k=i;
    while(k>0)
    {
      c +=(k%2);
      k/=2;
    }
    bits[i] = c;
  }
}
int main()
{
    IOS
    int T;
    cin>>T;
    while(T--){
        set<int> s;
        int Q;
        cin>>Q;
        while(Q--){
          int x,e=0,o=0;
          cin>>x;
          s.insert(x);
          for(set<int>::iterator it = s.begin();it!=s.end();it++){
            int y = *it;
            if(y == x)
              continue;
            s.insert(y^x);
          }
          for(set<int>::iterator it = s.begin();it!=s.end();it++){
            int y = *it , cc = 0;
            while(y>0){
              cc+=(y%2);
              y/=2;
            }
            if(cc%2) o++;
            else e++;
          }
          cout<<e<<" "<<o<<endl;
        }
    }
    return 0;
}