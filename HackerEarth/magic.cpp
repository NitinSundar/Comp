#include<bits/stdc++.h>
using namespace std; 
int main()
{
    vector<int> primes;
    for(int j,i=2;i<=256;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j == 0)
            {
                break;
            }
        }
        if(j == i )
            primes.push_back(i);
    }
	int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            int f = s[i],mi = 1e9,aa;
            for(int i=0;i<primes.size();i++)
            {
                int h = abs(f - primes[i]);
                if(h < mi)
                {
                    mi = h;
                    aa = primes[i];
                }
            }
            s[i] = (char)aa;
        }
        cout<<s<<endl;
    }
	return 0;
}