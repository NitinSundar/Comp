#include <bits/stdc++.h>

using namespace std;

vector <int> revisedRussianRoulette(vector <int> doors) {
    vector<int> ans;
    int min=0,max=0;
    for(int i=0;i<doors.size();i++) max+=(doors[i]==1);
    int c=0;
    for(int i=0;i<doors.size();i++)
     {
         if(doors[i] == 1)
         {
             c++;
             for(int j=i+1;j<doors.size();j++)
             {
                 if(doors[j])
                 {
                     c++;
                 }
                 else
                 {
                     min += c/2 + c%2;
                     c=0;
                     i=j-1;
                     break;
                 }
             }
             if(c) {min+=(c/2 + c%2);break;}
         }
     }
     ans.push_back(min);
     ans.push_back(max);
     return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> doors(n);
    for(int doors_i = 0; doors_i < n; doors_i++){
       cin >> doors[doors_i];
    }
    vector <int> result = revisedRussianRoulette(doors);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}
