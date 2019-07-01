/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1;
    cin>>n1;
    int a[n1];
    int visited[n1]={0};
    for(int i=0;i<n1;i++) cin>>a[i];
    int n2;cin>>n2;
    int b[n2];
    for(int i=0;i<n2;i++) cin>>b[i];
    int visited1[n2]={0};
    sort(a,a+n1);
    sort(b,b+n2);
    int ans=0;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(visited[i]==0 && visited1[j]==0 && abs(a[i]-b[j])<=1){
                visited[i]=1;
                visited1[j]=1;
                ans++;
                break;
            }
        }
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(visited[i]==0 && visited1[j]==0 && abs(a[i]-b[j])<=1){
                visited[i]=1;
                visited1[j]=1;
                ans++;
                break;
            }
        }
    }
    cout<<ans;
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,k=0,a[101],m,b[101],c[101];
	memset(c,0,sizeof(c));
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>a[i];
	cin>>m;
	for(int j=0; j<m; j++)
		cin>>b[j];
	sort(a,a+n);
	sort(b,b+m);
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			if(!c[j]&&abs(a[i]-b[j])<=1) {
				k++;
				c[j]=1;
				break;
			}
		}
	}
	cout<<k<<endl;
}
