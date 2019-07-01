#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int a[105][105];
int n,m;
int a1,b;
int ma=-1;
void findmax()
{
    ma=0;
    a1=-1;
    b=-1;
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) {
        if(ma<a[i][j]){
            ma=a[i][j];
            a1=i;
            b=j;
        }
    }

}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) {cin>>a[i][j];}
    int c=0;
    vector <int> row,col;
    while(ma!=0)
    {
        findmax();
        if(ma==0) continue;
        bool flag1=true,flag2=true;
        for(int i1=0;i1<n;i1++){
            if(a[i1][b]==0) flag1=false;
        }
        for(int i1=0;i1<m;i1++) if(a[a1][i1]==0) flag2=false;
    //cout<<"Hello"<<a1<<b<<"\n";
    if(!flag1 && !flag2) {cout<<"-1";return 0;}
    else if(flag1 && !flag2){
        c++;
        for(int i=0;i<n;i++) a[i][b]--;
        col.push_back(b);
    }
    else if(!flag1 && flag2) {
        c++;
        for(int i=0;i<m;i++) a[a1][i]--;
        row.push_back(a1);
    }
    else{
            if(n<m){
                    for(int i=0;i<m;i++) a[a1][i]--;
            c+=1;
            row.push_back(a1);
        }
        else{
            for(int i=0;i<n;i++) a[i][b]--;
        //for(int i=0;i<m;i++) a[a1][i]--;
        c+=1;
        //row.push_back(a1);
        col.push_back(b);
        }
    }
    }
    cout<<c<<"\n";
    for(int i=0;i<row.size();i++) cout<<"row "<<row[i]+1<<"\n";
    for(int i=0;i<col.size();i++) cout<<"col "<<col[i]+1<<"\n";
    return 0;
}
