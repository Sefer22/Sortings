#include<iostream>
#include<vector>

using namespace std;

int main()  {
	int n,m;
	cin>>n>>m;
	
	vector<int> inDegree(n+1,0);
	vector<int> outDegree(n+1,0);
	
	for(int i=0;i<m;i++) {
		int u,v;
		cin>>u>>v;
		outDegree[u]++;
		inDegree[v]++;
	}	
	for(int i=1;i<=n;i++) {
		cout<<inDegree[i] << " " <<outDegree[i]<<endl;
	}
	
	return 0;
}
