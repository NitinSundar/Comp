#include <iostream>
using namespace std;

int check(string s,int k)
{
    int c=0;
    for(int i=k,j=s.size()-1;i<=j;i++,j--) if(s[i]!=s[j]) c++;
    return c;
}
int main()
{
    string s;
    cin>>s;
    int ans=check(s,0);
    if(ans==0) cout<<"0";
    else{
        int c=1;
        while(c<=(s.size())/2){

            //for(int i=s.size()-1,j=0;j<c && i>=0;j++,i--) st=st+s[i];
            int p=check(s,c);
            ans=min(ans,p+c);
            c++;
        }
        cout<<ans;
    }
    return 0;
}
