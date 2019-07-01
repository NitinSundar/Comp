#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,j,k,l=0,i,m;
    cin>>n>>m;
    int a[m];
    int low=1,high=n,mid;
    for(i=0;i<m;i++){
        cout<<n<<endl;
        fflush(stdout);
        cin>>l;
        if(l==1){
            a[i]=-1;
        }
        else if(l==-1){
            a[i]=1;
        }
        else if(l==-2){
            return 0;
        }
        else if(l==0){
            return 0;
        }
    }
    int b[60];
    for(i=0;i<60;i++){
        b[i]=a[i%m];
    }
    mid=(low+high)/2;
    for(i=0;i<60;i++){
        cout<<mid<<endl;
        fflush(stdout);
        cin>>l;
        if(l==-2){
            return 0;
        }
        if(b[i]==1){
            if(l==1){
                low=mid+1;
            }
            else if(l==-1){
                high=mid-1;
            }
            else if(l==0){
                return 0;
            }
        }
        else{
            if(l==1){
                high=mid-1;
            }
            else if(l==-1){
                low=mid+1;
            }
            else if(l==0){
                return 0;
            }
        }
        mid=(low+high)/2;
    }
    return 0;
}
