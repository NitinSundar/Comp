#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[9],b[9],ans[9];
    for(int i=0;i<9;i++){
        cin>>a[i];
        b[i]=0;ans[i]=-1;
    }
    int ind=0,p=-1;
    for(int i=0;i<9;i++){
        if(a[i]>1) break;
        else{
            if(ans[ind]<a[i]){
                ans[ind]=a[i];
                p=i;
            }
        }
    }
    if(p==-1) {cout<<"impossible";return 0;}
    b[p]=1;
    ind++;
    p=-1;
    for(int i=0;i<9;i++){
        if(b[i]==1) continue;
        if(a[i]>2) break;
        else{
            if(ans[ind]<a[i]){
                ans[ind]=a[i];
                p=i;
            }
        }
    }
    if(p==-1) {cout<<"impossible";return 0;}
    b[p]=1;
    ind++;
    p=-1;
    for(int i=0;i<9;i++){
        if(b[i]==1) continue;
        if(a[i]>5) break;
        else{
            if(ans[ind]<a[i]){
                ans[ind]=a[i];
                p=i;
            }
        }
    }
    if(p==-1) {cout<<"impossible";return 0;}
    b[p]=1;
    ind++;
    p=-1;
    for(int i=0;i<9;i++){
        if(b[i]==1) continue;
        if(a[i]>10) break;
        else{
            if(ans[ind]<a[i]){
                ans[ind]=a[i];
                p=i;
            }
        }
    }
    if(p==-1) {cout<<"impossible";return 0;}
    b[p]=1;
    ind++;
    p=-1;
    for(int i=0;i<9;i++){
        if(b[i]==1) continue;
        if(a[i]>5) break;
        else{
            if(ans[ind]<a[i]){
                ans[ind]=a[i];
                p=i;
            }
        }
    }
    if(p==-1) {cout<<"impossible";return 0;}
    b[p]=1;
    ind++;
    p=-1;
    for(int i=0;i<9;i++){
        if(b[i]==1) continue;
        if(a[i]>10) break;
        else{
            if(ans[ind]<a[i]){
                ans[ind]=a[i];
                p=i;
            }
        }
    }
    if(p==-1) {cout<<"impossible";return 0;}
    b[p]=1;
    ind++;
    p=-1;
    for(int i=0;i<6;i++){
        if(i==2||i==4) cout<<":";
        cout<<ans[i];
    }
    return 0;
}
