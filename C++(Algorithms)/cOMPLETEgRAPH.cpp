#include<iostream>

using namespace std;

int main() {
	int n,m,i,j,a,b;
	cin>>n>>m;
	int G[n][n]={};
	
	for(i=0;i<m;i++) {
		cin>>a>>b;
		G[a-1][b-1]++;
	}
	for(i=0;i<n;i++) {
		for(j=i+1;j<n;j++) {
			if(G[i][j] !=0) continue;
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
}
