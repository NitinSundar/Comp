#include<bits/stdc++.h>
using namespace std;
int lis( int arr[], int n )
{
    int *lis, i, j, ma= 0;
    lis = (int*) malloc ( sizeof( int ) * n );

    /* Initialize LIS values for all indexes */
    for (i = 0; i < n; i++ )
        lis[i] = 1;

    /* Compute optimized LIS values in bottom up manner */
    for (i = 1; i < n; i++ )
        for (j = 0; j < i; j++ )
            if ( arr[i] > arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;

    /* Pick maximum of all LIS values */
    for (i = 0; i < n; i++ )
        if (ma < lis[i])
            ma = lis[i];

    /* Free memory to avoid memory leak */
    free(lis);

    return ma;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        int a1,b;
        cin>>a1>>b;
        if(a1%2==1 && b%2==1) a[i]=max(a1,b);
        else if(a1%2 ==0 && b%2==0) a[i]=min(a1,b);
        else{
            if(a1%2) a[i]=b;
            else a[i]=a1;
        }
    }


    for(int i=0;i<n;i++) cout<<a[i]<<' ';

    int ans=-1;
    for(int ind=1;ind<n-1;ind++){

    int arr[ind+1];
    for(int i=0;i<=ind;i++) arr[i]=a[i];
    int p=lis(arr,ind+1);
    cout<<p;
    int brr[n-ind-2];
    for(int i=n-1;i>ind;i--) brr[i]=a[i];
    p+=lis(brr,n-ind-2);
    //cout<<p<<' '<<ind<<"\n";
    ans=max(ans,p);
    }
    cout<<ans-1;
    return 0;
}
/*
5
1089 3234
6740 2803
9243 2638
4865 4355
5993 8946
*/
