#include<iostream>

using namespace std;

int main() {
	int N;
	cin>>N;
	dp[N];
	dp[2]=2;
	for(int i=2;i<N;i++) {
		dp[i]=i*dp[i-1];
	}
	cout<<N;
	
	
	return 0;
}
