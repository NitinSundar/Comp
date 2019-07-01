#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string s;
        cin>>s;
        int first=0,last=0;
        if(s[i]=='?') first=1;

        for(int i=0;i<s.size()-1;i++)
        {
               int arr[3]={0};
               if(s[i]!='?') continue;
               if(i==0){
                 if(s[i+1]='?') s[i]='a';
                 else if(s[i+1]=='a') s[i]='b';
                 else if(s[i+1]=='b') s[i]='a';
                 else s[i]='a';
               }
               else if(i>0 && i<s.size()-1){
                 if(s[i+1]=='?'){
                    if(s[i-1]=='a') s[i]='b';
                    else if(s[i-1]=='b') s[i]='a';
                    else s[i]='a';
                 }
                 else{
                    arr[s[i-1]-'a']++;
                    arr[s[i+1]-'a']++;
                    if(arr[0]==0) s[i]='a';
                    else if(arr[1]==0) s[i]='b';
                    else s[i]='c';
                 }

               }
        }
        int l=s.size()-1;
        if(s[l]!='?' && first){
            if(s[l]==s[0]){
                    arr[s[l]-'a']++;
                    arr[s[1]-'a']++;
                    if(arr[0]==0) s[0]='a';
                    else if(arr[1]==0) s[0]='b';
                    else s[0]='c';
            }
        }
        else if(s[l]=='?')
    }
    return 0;
}
