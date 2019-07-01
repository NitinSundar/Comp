#include<bits/stdc++.h>
using namespace std;
int ans=0;
bool Is(int x){
    if(x==1) return false;
 for(int i=2;i*i<=x;i++){
    if(x%i==0) return false;
 }
 return true;
}
int once(int a)
{
switch(a)
{
case 1: return 3;
break;
case 2: return 3;
break;
case 3: return 5;
break;
case 4: return 4;
break;
case 5: return 4;
break;
case 6: return 3;
break;
case 7: return 5;
break;
case 8: return 5;
break;
case 9: return 4;
break;
}
return 0;
}
int teens(int b)
{

switch(b)
{
case 1: return 6;
break;
case 2: return 6;
break;
case 3: return 8;
break;
case 4: return 8;
break;
case 5: return 7;
break;
case 6: return 7;
break;
case 7: return 9;
break;
case 8: return 8;
break;
case 9: return 8;
break;
}
return 0;
}
int  tens(int a)
{
    a=a/10;
switch(a)
{
case 1:return 3;
break;
case 2: return 6;
break;
case 3: return 6;
break;
case 4: return 6;
break;
case 5: return 5;
break;
case 6: return 5;
break;
case 7: return 7;
break;
case 8: return 6;
break;
case 9: return 6;
break;
}
return 0;
}


int main()
{
    int a,b;
    cin>>a>>b;
    for(int j=a;j<=b;j++){
            int i=j;
        if(Is(i)){
                int c=0;
            if(i<10){
                c=c+(once(i));
            }
            else if(i<100){
                if(i>10 && i<20) c+=(teens(i));
                else {
                    c+=(tens(i));
                    c+=(once(i%10));
                }
            }
            else if(i<1000){
                c+=(once(i/100));
                c+=7;
                if(i%100>0) {
                        c+=3;
                        i=i%100;
                        if(i>10 && i<20) c+=(teens(i));

                else {
                    c+=(tens(i));
                    c+=(once(i%10));
                }
                }


            }
            else if(i<10000){
                c+=(once(i/1000));
                c+=8;
                i=i%1000;
                if(i/100){
                    c+=(once(i/100));
                c+=7;
                }
                if(i%100>0) {
                        c+=3;
                        i=i%100;
                        if(i>10 && i<20) c+=(teens(i));

                else {
                    c+=(tens(i));
                    c+=(once(i%10));

                }
                }

            }
            else{
                int j=i/1000;
                if(j>10 && j<20) c+=(teens(i));
                else {
                    c+=(tens(j));
                    c+=(once(j%10));
                }
                c+=8;
                i=i%1000;
                if(i>0){
                    if(i/100 > 0){
                        c+=(once(j%10));
                        c+=7;
                        i=i/100;
                        if(i/10 > 0){
                            c+=3;
                            if(i>10 && i<20) c+=(teens(i));

                else {
                    c+=(tens(i));
                    c+=(once(i%10));

                }
                        }
                    }
                }
            }
            cout<<j<<' '<<c<<endl;
            if(Is(c)) {ans++;}
        }
    }
    cout<<ans;
    return 0;
}
