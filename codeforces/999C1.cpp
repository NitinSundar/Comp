#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin >> n >>k;
	string s;
	char c ='a';
	cin >> s;
	vector<char> v;
	for(int i=0; i<s.size();i++){
		if(s[i]!=c && k!=0){
		v.push_back(s[i]);
		}
		
		else k--;
		
		if(k!=0 && i==s.size()-1){
		c++;
		i=0;
		}

	}
	for(int i=0; i<v.size(); i++){
	cout<<v[i];
	}
	return 0;

}