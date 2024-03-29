#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
 
using namespace std;
 
int n, m;
 
long long gen[50], lft[50], rght[50], tot[50];
 
int main() {
        scanf("%d%d", &n, &m);
        int len, num;
        for (int i = 0; i < n; i++) {
                scanf("%d", &len);
                int mx = -(1 << 30);
                int sum = 0;
                for (int j = 0; j < len; j++) {
                        scanf("%d", &num);
                        tot[i] += num;
                        lft[i] = max(lft[i], tot[i]);
                        rght[i] = min(rght[i], tot[i]);
                        mx = max(mx, num);
                        sum += num;
                        if (sum < 0)
                                sum = 0;
                        else
                                mx = max(mx, sum);
                }
                gen[i] = mx;
                rght[i] = tot[i] - rght[i];
        }
        long long cur = 0;
        long long best = (long long) (-1e18);
        while (m--) {
                int i;
                scanf("%d", &i);
                i--;
                best = max(best, gen[i]);
                if (cur)
                        best = max(best, cur + lft[i]);
                cur = max(0ll, max(rght[i], cur + tot[i]));
        }
        cout << best << endl;
        return 0;
}