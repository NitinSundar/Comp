#include<bits/stdc++.h>
using namespace std;
int dp[13][77][1234];

long long solve(int b, long long n) {
  vector<int> d;
  while (n > 0) {
    d.push_back(n % b);
    n /= b;
  }
  int len = d.size();
  long long res = 0;
  for (int small_len = 1; small_len < len; small_len++) {
    res += dp[b][small_len][0] - dp[b][small_len - 1][1];
  }
  int mask = 0;
  for (int i = len - 1; i >= 0; i--) {
    for (int j = 0; j < d[i]; j++) {
      if (i == len - 1 && j == 0) {
        continue;
      }
      res += dp[b][i][mask ^ (1 << j)];
    }
    mask ^= (1 << d[i]);
  }
  return res;
}

int main()
{

    for (int b = 2; b <= 10; b++) {
    dp[b][0][0] = 1;
    for (int i = 1; i <= 63; i++) {
      for (int t = 0; t < (1 << b); t++) {
        dp[b][i][t] = 0;
        for (int d = 0; d < b; d++) {
          dp[b][i][t] += dp[b][i - 1][t ^ (1 << d)];
        }
      }
    }
  }
  int b=2;
  for(int i=1;i<=63;i++){
    for(int t=0;t < (1<<b);t++ ){
        cout<<dp[2][i][t]<<" ";
    }
    cout<<"\n";
  }
    cout<<solve(2,10)-solve(2,5)<<"bjg";

return 0;
}
