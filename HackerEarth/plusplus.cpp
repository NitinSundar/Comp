#include<bits/stdc++.h>
using namespace std;
 int a[100][100];
 int n,m;
 bool isin(int x,int y)
 {
    if(x-1>=0 && x+1<n && y-1>=0 && y+1<m)
        return true;
    return false;
 }
 int dx[5] = {-1,0,0,0,1};
 int dy[5] = {0,-1,0,1,0};
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>m;
    int ans = -1;
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>a[i][j];
    for(int i=1;i<n-1;i++)
    {
        for(int j=1;j<m-1;j++)
        {
           
                for(int i1 = 1;i1<n-1;i1++)
                {
                    for(int j1 =1;j1<m-1;j1++)
                    {
                     
                        if( i==i1 && abs(j-j1)<=2) continue;
                        if( j==j1 && abs(i-i1)<=2) continue;
                        int a1 = abs(i-i1),b1=abs(j-j1);
                        if(max(a1,b1)<2) continue;
                        int f = 0,it;
                        for(it=0;it<5;it++)
                        {
                         f+= a[i+dx[it]][j+dy[it]]*a[i1+dx[it]][j1+dy[it]];
                        }
                        if(it == 5)
                            ans=max(ans,f);
                    }
                }
            
        }
    }   
    cout<<ans;
    return 0;
}