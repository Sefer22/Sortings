#include<iostream>

using namespace std;

const int MAX = 51;

int main()  {
	int n,m;
	cin>>n>>m;
	
	int dp[MAX[MAX]={0};
	
	for(int i=1;i<=n;i++) dp[i][1]=1;
	for(int j=1;j<=m;j++) dp[1][j]=1;
	
	for(int i=2;i<=n;i++) {
		for(int j=2;j<=m;j++) {
			dp[i][j]=dp[i-2][j-1]+dp[i-1][j-2];
		}
	}
	
	cout<<dp[n][m]<<endl;
	
	return 0;
}
