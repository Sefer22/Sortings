#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n;
	cin>>n;
	
	vector<vector<int> > matrix(n+1,vector<int>(n+1,0));
	vector<int> colors(n);
	 
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			cin>>matrix[i][j];
		}
	}
	
	for(int i=0;i<n;i++) {
		cin>>colors[i];
	}
	int badBridgeCount=0;
	
	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			if(matrix[i][j]==1 && colors[i] != colors[j]) {
				badBridgeCount++;
			}
		}
	}
	
	cout<<badBridgeCount<<endl;
	
	return 0;
}
