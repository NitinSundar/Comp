#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define BOOST ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{

    int n;
    cin>>n;
    lli a[n],s[n]={0};
    lli su=0,even=0,odd=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        su+=a[i];
        if(a[i]%2) odd++;
        else even++;
        if(i!=0) s[i]=s[i-1]+a[i];
        else s[i]=a[i];
    }
    /*if(su%2==1 || odd==n) {
        cout<<"First";
    return 0;
    }
    if(even==n) {
            cout<<"Second";
            return 0;
    }*/
    int i=0,j,turn=1;
    while(i<n){
       //  cout<<"sample";
       int temp=i;
    for(j=n-1;j>=i;j--)
    {
        if(turn){
            if(i==0 && s[j]%2==1){
                i=j+1;
                turn=0;
              //  cout<<i<<j<<"1";
                break;
            }
            else if(i>0 && (s[j]-s[i-1])%2==1)
            {
                i=j+1;
                turn=0;
               // cout<<i<<j<<"1";
                break;
            }
        }
        else{
            if(i==0 && s[j]%2==0){
                i=j+1;
                turn =1;
               // cout<<i<<"2";
                break;
            }
            else if(i>0 && (s[j]-s[i-1])%2==0)
            {
                i=j+1;
                turn=1;
               // cout<<i<<"1";
                break;
            }
        }
    }
    if(temp==i) {break;}
    }
    if(turn) cout<<"Second";
    else cout<<"First";
    return 0;
}
/*
5
1 2 2 2 1
*/
