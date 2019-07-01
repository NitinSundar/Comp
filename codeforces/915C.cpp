#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int ind=0,brr[100]={0};
int arr[10]={0};
lli a,b;
int nod(lli x)
{
    int c=0;
    while(x>0)
    {
        c++;
        x=x/10;
    }
    return c;
}
void func(int i,lli ans)
{
    if(i==-1)
    {
        cout<<ans;
        exit(0);
    }
    int ter=0;
    if(i==ind-1) ter=1;
    int x=brr[i];
    for(int j=x;j>=ter;j--)
    {
        if(arr[j] > 0)
        {
            if( j == x)
            {
                ans=ans*10+j;
                arr[j]--;
                func(i-1,ans);
                ans=ans/10;
                arr[j]++;
            }
            else
            {
                ans=ans*10+j;
                arr[j]--;
                for(int f=9;f>=0;f--) while(arr[f]--) ans=ans*10+f;
                cout<<ans;
                exit(0);    
            }
        }
    }
}
int main()
{
    cin>>a>>b;
    int x=nod(a),y=nod(b);
    
    while(a>0)
    {
        arr[a%10]++;
        a=a/10;
    }
    lli o=b;
    while(b>0)
    {
        brr[ind++]=b%10;
        b=b/10;
    }
    b=o;
    if(x<y)
    {
        for(int i=9;i>=0;i--) while(arr[i]--) cout<<i;
    }
    else
    {
        lli ans=0;
        func(ind-1,ans);
    }
	return 0;
}

