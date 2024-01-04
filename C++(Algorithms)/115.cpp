#include<iostream>

using namespace std;

int main()  {
	int n;
	cin>>n;
	int dp[n];
	dp[0]=2;
	dp[1]=4;
	
	for(int i=2;i<n;i++) {
		dp[i]=dp[i-1]+dp[i-2];
	}
	
	cout<<dp[n-1];
	
	return 0;
}
