#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,q;
    cin>>n>>q;
    lli a[n],b[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    lli aodd[n]={0},aeven[n]={0},bodd[n]={0},beven[n]={0};
    for(int i=0;i<n;i+=2){
        aeven[i]=a[i];
        beven[i]=b[i];
    }
    for(int i=1;i<n;i+=2){
        aodd[i]=a[i];
        bodd[i]=b[i];
    }
    lli saodd[n]={0},saeven[n]={0},sbodd[n]={0},sbeven[n]={0};
    saodd[0]=aodd[0];sbodd[0]=bodd[0];saeven[0]=aeven[0];sbeven[0]=beven[0];
    for(int i=1;i<n;i++){
        saodd[i]=saodd[i-1]+aodd[i];
        sbodd[i]=sbodd[i-1]+bodd[i];
        saeven[i]=saeven[i-1]+aeven[i];
        sbeven[i]=sbeven[i-1]+beven[i];
    }
    while(q--)
    {
		lli ans=0;
        int type,l,r;
        cin>>type>>l>>r;
        l--;r--;
        if(type==1)
        {
            if(l%2==0)
			{
			 ans=ans+saeven[r]-saeven[l]+aeven[l];
			 ans+=sbodd[r]-sbodd[l];
			}
			else{
			ans+=saodd[r]-saodd[l]+aodd[l];
			ans+=sbeven[r]-sbeven[l];
			}
        }
		else
		{
			if(l%2==0)
			{
			 ans+=sbeven[r]-sbeven[l]+beven[l];
			 ans+=saodd[r]-saodd[l];
			}
			else{
			ans+=sbodd[r]-sbodd[l]+bodd[l];
			ans+=saeven[r]-saeven[l];
			}
		}
		cout<<ans<<"\n";
    }
    return 0;
}
