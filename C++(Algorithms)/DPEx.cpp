#include<iostream> 

using namespace std;

int minimum(int a,int b) {
	return a < b ? a : b;
}

int main() {
	int n,m;
	cin>>n>>m;
	int DP[n][m];
	
	for(int i=0;i<n;i++) 
		for(int j=0;j<m;j++) cin>>dp[i][j];
		
	for(int i=1;i<n;i++) DP[i][0] += DP[i-1][0];
	for(int j=1;j<m;j++) DP[0][j] += DP[0][j-1];  	
	
	
	for(int i=1;i<n;i++)
	   for(j=1;j<m;j++) DP[i][j] +=minimum(DP[i-1][j],DP[i][j-1]);
	   
	   cout<<DP[n-1][m-1]; 
	
		
	return 0;
}
