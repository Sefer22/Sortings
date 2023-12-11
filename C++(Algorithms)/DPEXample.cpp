#include<iostream>

using namepsace std;

int maximum() {
	return a > b ? a : b;
}

int main() {
	int n,m;
	cin>>n>>m;
	DP[n][m];
	
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++) cin>>DP[i][j];
		
	for(int i=n-2;i>=0;i--) DP[i][0] +=	DP[i+1][0];
	for(int j=1;j<m;j++) DP[n-1][j] += DP[n-1][j+1];
		
	for(int i=n-2;i>-0;i--)
	   for(j=1;j<m;j++) DP[i][j]=maximum(DP[i+1][j],DP[i][j-1]);
	   
	   
	   cout<<DP[n][m-1];	
		
	for(int i=n-1;i>=0;i--){
	
	   for(int j=0;j<m;j++) cout<<DP[i][j] <<" ";
cout<<endl;	
}
	return 0;
}
