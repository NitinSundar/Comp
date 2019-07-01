#include "bits/stdc++.h"
#define ll long long
#define f(i,a,b) for(ll i = a ; i <=b; i++)
#define endl "\n"
using namespace std;

int main()
{
    string s;
    cin>>s;
    if(s.size()==1)
    {
        cout<<"NO"<<endl;
        exit(0);
    }
    ll i,f=0,g=0;
    f(i,0,s.size()-2)
    {
        if(s[i]=='A' && s[i+1]=='B')
        {
            f(j,i+2,s.size()-2)
            {
                if(s[j]=='B' and s[j+1]=='A')
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                f-=1;
                break;
            }
        }
        if(f==-1)
        {
            break;
        }
        if(f==1)
        {
            break;
        }
    }
    f(i,0,s.size()-2)
    {
        if(s[i]=='B' && s[i+1]=='A')
        {
            f(j,i+2,s.size()-2)
            {
                if(s[j]=='A' and s[j+1]=='B')
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                f-=2;
                break;
            }
        }
        if(f==-2)
        {
            break;
        }
        if(f==1)
        {
            break;
        }
    }
    if(f==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}