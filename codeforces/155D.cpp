#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cstring>
#include <iomanip>
#include <cmath>
#include <sstream>

using namespace std;

#define pie pair <int, int>
#define ff first
#define ss second

const int maxN = 100 * 1000 + 100;

vector <int> d[maxN];
set <int> f[maxN];
int on[maxN];

void turnoff (int x)
{
    on[x] = 0;
    for (vector <int>::iterator i = d[x].begin(); i != d[x].end(); i++)
        f[*i].erase (x);
    cout << "Success" << endl;
}

void turnon (int x)
{
    for (vector <int>::iterator i = d[x].begin(); i != d[x].end(); i++)
        if (f[*i].size())
        {
            cout << "Conflict with " << *f[*i].begin() << endl;
            return;
        }
        
    on[x] = 1;
    for (vector <int>::iterator i = d[x].begin(); i != d[x].end(); i++)
        f[*i].insert (x);
    cout << "Success" << endl;
}

int main()
{
    ios::sync_with_stdio (false);
    
    int n, m;
    cin >> n >> m;
    for (int i = 2; i <= n; i++)
        for (int j = i; j <= n; j += i)
            d[j].push_back (i);

    for (int i = 0; i < m; i++)
    {
        char x; cin >> x;
        int y; cin >> y;
        if (x == '+')
            if (on[y]) cout << "Already on" << endl;
            else turnon (y);
        else
            if (!on[y]) cout << "Already off" << endl;
            else turnoff (y);
    }   

    return 0;
}