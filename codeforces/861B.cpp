#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector <int> ans;
    int k[m],f[m];
    for(int i=0;i<m;i++) cin>>k[i]>>f[i];
    for(int i=1;i<=100;i++)
    {
        bool flag=true;
        for(int j=0;j<m;j++)
        {
            int p=k[j]/i;
            if(k[j]%i!=0) p++;
            ///if(i==3) cout<<p;
            if(p!=f[j]) {
                flag=false;
                break;
            }
        }
        if(flag) ans.push_back(i);
    }
   ///for(int i=0;i<ans.size();i++) cout<<ans[i];
   if(ans.size()==0) cout<<"-1";
   else{
        int p=n/ans[0];
   if(n%ans[0]!=0) p++;
    for(int i=0;i<ans.size();i++)
    {
        int x=n/ans[i];
        if(n%ans[i]!=0) x++;
        if(x!=p){
            p=-1;
            break;
        }

    }
    cout<<p;
   }
    return 0;
}
