#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n;
	cin>>n;
	
	vector<vector<int> > Matrix(n,vector<int>(n,0));
	
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			cin>>Matrix[i][j];
		}
	}
	
	for(int i=0;i<n;i++) {
		int degree=0;
		for(int j=0;j<n;j++) {
			degree = degree+Matrix[i][j];
		}
		cout<<degree<<" ";
	}
	
	
	return 0;
}

