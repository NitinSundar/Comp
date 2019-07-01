#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    int n,k,rows;
    cin>>n>>k;
    rows=n;
    int a[k];
    for(int i=0;i<k;i++) {
            cin>>a[i];
            //int c=((int)(a[i]/8));

            rows=rows-((int)(a[i]/8));
            a[i]=a[i]%8;
    }
    int c[8]={0};
    for(int i=0;i<k;i++) c[a[i]]++;
    //cout<<rows<<endl;
    //for(int i=1;i<8;i++) cout<<c[i]<<' '; cout<<endl;
    rows=rows-c[7];
    c[7]=0;
    int r6,r5;
    r6=c[6];rows=rows-c[6];
    r5=c[5];rows=rows-c[5];
   // cout<<rows<<endl;
    //for(int i=1;i<8;i++) cout<<c[i]<<' '; cout<<endl;
    c[6]=0;
    c[5]=0;
    if(c[1]+c[2] <= r5+r6){
        c[1]=0;
        c[2]=0;
        while(c[3]>0 && c[4]>0){
            c[3]--;
            c[4]--;
            rows--;
        }
        while(c[3]>0){
            c[3]-=2;
            rows--;
        }
        while(c[4]>0){
            c[4]-=2;
            rows--;
        }
        if(rows>=0) cout<<"YES";
        else cout<<"NO";
    }
    else{
            int k=r6+r5;
            if(k>=c[2]) {k=k-c[2]; if(k>0) c[1]=c[1]-k;k=0;}
            if(k>=c[1]) {k=k-c[1]; if(k>0) c[2]=c[2]-k;k=0;}
            //cout<<rows<<endl;
            //for(int i=1;i<8;i++) cout<<c[i]<<' '; cout<<endl;
        c[3]+=min(c[2],c[1]);
        if(c[2]>c[1]){c[2]=c[2]-c[1];c[1]=0;}
        else if(c[1]==c[2]){c[1]=0;c[2]=0;}
        else {c[1]=c[1]-c[2];c[2]=0;}
        while(c[3]>0 && c[4]>0){
            c[3]--;
            c[4]--;
            rows--;
        }
    //cout<<rows<<endl;
    //for(int i=1;i<8;i++) cout<<c[i]<<' '; cout<<endl;
        while(c[3]>0){
                if(c[3]==1){
                    if(c[2]>0) c[2]-=2;
                    else c[1]=c[1]-2;
                    c[3]--;
                }
            else c[3]-=2;
            rows--;
        }
        //cout<<rows<<endl;
        //for(int i=1;i<8;i++) cout<<c[i]<<' '; cout<<endl;
        while(c[4]>0){
                if(c[4]==1){
                    if(c[2]>0) c[2]-=2;
                    else c[1]=c[1]-2;
                    c[4]--;
                }
            else c[4]-=2;
            rows--;
        }
       // cout<<rows<<endl;
        // for(int i=1;i<8;i++) cout<<c[i]<<' '; cout<<endl;
        while(c[2]>0){
            c[2]=c[2]-3;
            rows--;
        }
     //   cout<<rows<<endl;
      //  for(int i=1;i<8;i++) cout<<c[i]<<' '; cout<<endl;
        while(c[1]>0){
            c[1]=c[1]-4;
            rows--;
        }
     //   cout<<rows<<endl;
       // for(int i=1;i<8;i++) cout<<c[i]<<' '; cout<<endl;
        if(rows>=0) cout<<"YES";
        else cout<<"NO";
    }


    return 0;
}
