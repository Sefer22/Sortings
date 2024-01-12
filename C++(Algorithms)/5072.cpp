#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n;
	cin>>n;
	
	vector<vector<int> > til(n,vector<int>(n,0));
	
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++){
			cin>>til[i][j];
		}
	}
	int count=0;
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
		count += til[i][j];	
		}
	}
	
	cout<<count<<endl;
	
	
	return 0;
}
