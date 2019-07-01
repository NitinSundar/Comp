#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int l=s.size();
    int a[l];
    for(int i=0;i<l;i++) a[i]=s[i]-48;
    int flag[l]={0};
    int ans[l]={0};
    for(int i=0;i<l;i++) if(a[i]%2==0) flag[i]=1;

    ans[l-1]=flag[l-1];
    for(int i=1-2;i>=0;i--) ans[i]=a[i+1]+flag[i];
    for(int i=0;i<l;i++) cout<<ans[i]<<' ';
    return 0;
}
