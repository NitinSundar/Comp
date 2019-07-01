#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
string s[8];
vector<pair<int,int> > pawns,rook,bishop,queen,king,horse;
set<pair<int,int> > st;
pair<int,int> target;
#define mp make_pair
#define pb push_back
void init()
{
	for(int i=0;i<8;i++) s[i].clear();
	pawns.clear();
	rook.clear();
	bishop.clear();
	queen.clear();
	king.clear();
	horse.clear();
	st.clear();
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int T;
	cin>>T;
	while(T--)
	{
		init();
		for(int i=0;i<8;i++) cin>>s[i];
		for(int i=0;i<8;i++)
		{
			for(int j=0;j<8;j++)
			{
				if(s[i][j] == '#') continue;
				if(s[i][j] == k) target = mp(i,j);
				else if(s[i][j]>='a' && s[i][j]<='z') st.insert(mp(i,j));
				else if(s[i][j] == 'P') pawns.pb(mp(i,j));
				else if(s[i][j] == 'K') king.pb(mp(i,j));
				else if(s[i][j] == 'N') horse.pb(mp(i,j));
				else if(s[i][j] == 'Q') queen.pb(mp(i,j));
				else if(s[i][j] == 'B') bishop.pb(mp(i,j));
				else if(s[i][j] == 'R') rook.pb(mp(i,j));
			}
		}


	}
	return 0;
}