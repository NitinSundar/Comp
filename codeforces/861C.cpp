#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    set <char> st;
    int c=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ){
            st.clear();
            c=0;
            cout<<s[i];
        }
        else{
            if(c<2){
               c++;
                st.insert(s[i]);
                cout<<s[i];
            }
            else if(c>=2 && st.find(s[i])!=st.end() && st.size()<2){
                c++;
                st.insert(s[i]);
                cout<<s[i];
            }

            else{
                cout<<" ";
                c=0;
                st.clear();
                i--;
            }
        }

    }
    return 0;
}
