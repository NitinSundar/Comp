#include<bits/stdc++.h>
#define lli long long int
using namespace std;
lli count(lli f)
{
    lli lol=0;
    while(f>0)
    {
        if(f%2 == 1)
            lol++;
        f=f/2;
    }
    return lol;
}

int main(){
    int T;
    cin>>T;
    while(T--)
    {
        lli a,b;
        cin>>a>>b;

        if(a==b)
        {
            cout<<"0\n";
            continue;
            
        }
        else if((b == 0) || (b==1 && a != 0))
        {
            cout<<"-1\n";
            continue;
        }
        lli x,y;
        x=count(a);
        y=count(b-1);
        if(x == y)
        {
            cout<<"1\n";
        }
        else if(x>y)
        {
            cout<<"2\n";
        }
        else
        {
            cout<<1+y-x<<endl;
        }
    }
    return 0;
}