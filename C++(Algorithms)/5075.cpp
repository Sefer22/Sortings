#include<iostream>
#include<vector>
#include<utility>

using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	
	vector<pair<int,int> > edges(m);
	vector<int> inDegree(n+1,0);
	vector<int> outDegree(n+1,0);
	
	for(int i=0;i<m;i++) {
		cin>>edges[i].first>>edges[i].second;
		inDegree[edges[i].second]++;
		outDegree[edges[i].first]++;
	}
	
	for(int i=1;i<=n;i++) {
		cout<<inDegree[i]<<" "<<outDegree[i]<<endl;
	}
	
	
	return 0;
}
