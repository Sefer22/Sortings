#include<iostream>

using namespace std;

int minimum(int a,int b) {
	if(a<b) return a;
	else return b;
}

int main()  {
	
	int n,m;
	cin>>n>>m;
	int dp[n+1][m+1];
	
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=m;j++) {
			cin>>dp[i][j];
		}
	}
	
	for(int i=2;i<=n;i++) dp[i][1]+=dp[i-1][1];
	for(int j=2;j<=m;j++) dp[1][j]+=dp[1][j-1];
	
	for(int i=2;i<=n;i++) {
		for(int j=2;j<=m;j++) {
			dp[i][j]+=minimum(dp[i-1][j],dp[i][j-1]);
		}
	}
	
	cout<<dp[n][m];
	
	return 0;
}
