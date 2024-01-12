#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n;
	cin>>n;
	
	vector<vector<int> > cities(n,vector<int>(n,0));
	
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			cin>>cities[i][j];
		}
	}
	int count=0;
	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			if(cities[i][j]==1 && cities[j][i]==1) {
				count++;
			}
		}
	}
	
	cout<<count<<endl;
	
	return 0;
}
