#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
bool check(string s)
{
    if(s[0]==s[4] && s[1]==s[3]) return true;
    else return false;
}
int main()
{
    string s;
    cin>>s;
    int t=0;
    char a=s[0];
    char b=s[1];
    char c=s[3];
    char d=s[4];
    for(;;)
    {
        s[0]=a;
        for(;;)
        {
            s[1]=b;
            for(;;)
            {
                s[3]=c;
                for(;;)
                {
                    s[4]=d;
                    //cout<<s<<endl;
                    if(check(s)){
                        cout<<t;
                        return 0;
                    }
                    t++;
                    if(d<'9') d++;
                    else {
                            d='0';
                            break;
                    }
                }
                if(c<'5') c++;
                    else {
                            c='0';
                            break;
                    }
            }
            if(a!='2'){ if(b<'9') b++;
                    else {
                            b='0';
                            break;
                    }}
             else{
                if(b<'3') b++;
                else{
                    b='0';
                    break;
                }
             }
        }
        if(a<'2') a++;
                    else {
                            a='0';

                    }
    }
    return 0;
}
