#include<iostream>
#include<vector>
#include<utility>

using namespace std;

int main()  {
	int n,m;
	cin>>n>>m;
	
	vector<pair<int,int> > edges(m);
	vector<vector<int> > matrix(n,vector<int>(n,0));
	
	for(int i=0;i<m;i++) {
		cin>>edges[i].first>>edges[i].second;
		matrix[edges[i].first][edges[i].second]++;
		if(matrix[edges[i].first][edges[i].second] > 1) {
			cout<<"YES"<<endl;
			return 0;
		}
	}
	
	cout<<"NO"<<endl;
	return 0;
	
	
	return 0;
}
