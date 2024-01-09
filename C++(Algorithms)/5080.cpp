#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n,count=0;
	cin>>n;
	
	vector<vector<int> > matrix(n,vector<int>(n,0));
	
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			cin>>matrix[i][j];
		}
	}
	
	for(int i=0;i<n;i++) {
		int degree=0;
		for(int j=0;j<n;j++) {
			degree=degree+matrix[i][j];
		}
			if(degree==1) {
				count++;
			}
	}
	
	cout<<count<<endl;
	
	return 0;
}
