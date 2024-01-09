#include<iostream>
#include<vector>
#include<utility>

using namespace std;

int main()  {
	int n,m;
	cin>>n>>m;
	
	vector<pair<int,int> > edges(m);
	vector<vector<int> > adjMatrix(n+1,vector<int>(n+1,0));
	
	for(int i=0;i<m;i++) {
		cin>>edges[i].first>>edges[i].second;
		adjMatrix[edges[i].first][edges[i].second]++;
		if(adjMatrix[edges[i].first][edges[i].second] > 1) {
			cout<<"YES"<<endl;
			return 0;
		}
	}
		
	cout<<"NO";
	
	
	
	return 0;
}
