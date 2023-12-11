#include<iostream>

using namepsace std;

int main() {
	int n;
	cin>>n;
	DP[n];
	
	DP[0] = 2;
	DP[1] = 4;
	
	for(int i=2;i<n;i++) {
		DP[i] = DP[i-2] + DP[i-1];
	}
	
	cout<<DP[n-1];
	
	return 0;
}
