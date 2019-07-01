#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<int,int> arr;
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        arr[temp%k]++;
    }
    int max = -1;
    for(auto it = arr.begin();it!=arr.end();it++)
    {
        if(max<(it->second))
        {
            max = it->second;
        }
    }
    int sum = 0;
    for(auto it=arr.begin();it!=arr.end();it++)
    {
        sum+=(max-(it->second));
    }
    cout<<sum<<endl;
    return 0;
}
