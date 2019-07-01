#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int A_win=100,B_win=101;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string a,b;
        cin>>a>>b;
        map <char,int> cnt[2];
        cnt[0].clear();
        cnt[1].clear();
        int n=a.size();
        for(auto x: a) cnt[0][x]++;
        for(auto x: b) cnt[1][x]++;
        int state=0;
        for(char x: a){
            if(cnt[0][x]>1 && cnt[1][x]==0){
                state=A_win;
                break;
            }
            if(cnt[0][x]==1 && cnt[1][x]==0) state=1;
        }
        if(state==0) state=B_win;
        if(state==1){
            for(char y: b){
                if(cnt[0][y]==0){
                    state=B_win;
                    break;
                }
            }
            if(state==1) state=A_win;
        }
        string ans="A";
        if(state==B_win) ans="B";
        cout<<ans<<endl;
    }
	return 0;
}
