#include<iostream>

using namespace std;

int main() {
	int m,n;
	cin>>m>>n;
	long long dp[m+1][n+1];
	
	for(int i=1;i<=m;i++) dp[i][1]=1;
	for(int j=1;j<=n;j++) dp[1][j]=1;
	
	for(int i=2;i<=m;i++) {
		for(int j=2;j<=n;j++) {
			dp[i][j]=dp[i-1][j] + dp[i][j-1];
		}
	}
	cout<<dp[m][n]<<endl;
	
	return 0;
}
