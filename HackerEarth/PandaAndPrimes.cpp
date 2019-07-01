#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int primatic[10005]={0};
set<int> s;
int pow(int a,int b)
{
    if(b==0) return 1;
    int p=pow(a,b/2);
    p=p*p;
    if(b%2) p=p*a;
    return p;
}
void sieve()
{
    primatic[0]=1;
    primatic[1]=1;
    for(int i=2;i<10005;i++)
    {
        if(primatic[i]==0){
                s.insert(i);
            for(int j=2*i;j<10005;j+=i){
                primatic[j]=1;
            }
        }
    }
}
int main()
{
    sieve();
    for(int i=2;i<1005;i++){
        if(!primatic[i]){
            int j=pow(i,i);
            if(j>10000) break;
            s.insert(j);
        }
    }
    set <int> s1;
    set<int>::iterator it1,it2;
    it1=s.begin();
    for(it1=s.begin();it1!=s.end();it1++)
    {
        for(it2=s.begin();it2!=s.end();it2++)
        {
            s1.insert(*it1 + *it2);
        }
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(s.count(n)>0) cout<<"1\n";
        else if(s1.count(n)>0)cout<<"2\n";
        else cout<<"3\n";
    }
    return 0;
}
