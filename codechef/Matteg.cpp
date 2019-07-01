#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int T=1,r,c;
int isin(int x,int y)
{
    if(x>=0 && x<r && y>=0 && y<c) return 1;
    return 0;
}
vector <int> vx,vy;


void go(int sx,int sy,map <pair<int,int>,int>& mp,lli& ans )
{
    map<pair<int,int> ,int>::iterator it1,it2;;

}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>T;
    while(T--)
    {
        int n,key;
        cin>>r>>c>>n;
        int sx,sy;
        cin>>sx>>sy;
        map <pair<int,int> ,int> mp;
        for(int i=0;i<n && cin>>key;i++) vx.push_back(key);
        for(int i=0;i<n && cin>>key;i++) vy.push_back(key);
        for(int i=0;i<n;i++) mp[{vx[i],vy[i]}]++;
        int a[r][c];

        for(int i=0;i<r;i++) for(int j=0;j<c;j++) cin>>a[i][j];
        lli ans=a[sx][sy];
        go(sx,sy,mp,&ans);
        /*for(int i=0;i<n;i++){
            pair<int,int> p,q;
            lli val=-1,flag=0;
            for(it1=mp.begin();it1!=mp.end();it1++){
                q=it1->first;

                int x=q.first,y=q.second;
                if(isin(sx+x,sy+y)){
                    if(a[sx+x][sy+y]>=val){
                        val=a[sx+x][sy+y];
                        p=q;
                        flag=1;
                    }
                }
                if(isin(sx-x,sy-y)){
                    if(a[sx-x][sy-y]>=val){
                        val=a[sx-x][sy-y];
                        p=q;
                        flag=2;
                    }
                }
                if(isin(sx+x,sy-y)){
                    if(a[sx+x][sy-y]>=val){
                        val=a[sx+x][sy-y];
                        p=q;
                        flag=3;
                    }
                }
                if(isin(sx-x,sy+y)){
                    if(a[sx-x][sy+y]>=val){
                        val=a[sx-x][sy+y];
                        p=q;
                        flag=4;
                    }
                }
            }
            if(val==-1) break;
            ans+=val;
            int x=p.first,y=p.second;
            if(flag==1) sx=sx+x,sy=sy+y;
            else if(flag==2) sx=sx-x,sy=sy-y;
            else if(flag==3) sx+=x,sy-=y;
            else if(flag==4) sx-=x,sy+=y;
            //cout<<sx<<sy<<val<<"\n";
            if(mp[p]==1){
                mp.erase(p);
            }

        }*/
        cout<<ans<<"\n";
    }
    return 0;
}
