#include<iostream>
#include<vector>
#include<utility>

using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	
	vector<pair<int,int> > edges(m);
	vector<vector<int> > degree(n+1,vector<int>(n+1,0));
	
	for(int i=0;i<m;i++) {
		cin>>edges[i].first>>edges[i].second;
		degree[edges[i].first][edges[i].second]++;
		degree[edges[i].second][edges[i].first]++;
	}
	
	for(int i=1;i<n;i++) {
		for(int j=i+1;j<n;j++) {
		if(degree[i][j] > 0 && degree[j][i] > 0)  {
			cout<<"YES"<<endl;
			return 0;
		}
	}
}
	
	cout<<"NO"<<endl;
	
	
	return 0;
}
