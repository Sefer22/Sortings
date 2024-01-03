#include<iostream>
#include<vector>

using namespace std;

int main()  {
	int n,m,x,y;
	cin>>n>>m>>x>>y;

	vector<vector<int> > matrix(n,vector<int>(m,0));
	
	int counter=0;
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			matrix[i][j]=counter++;
		}
	}
	
	cout<<matrix[x-1][y-1];
	
	return 0;
}
