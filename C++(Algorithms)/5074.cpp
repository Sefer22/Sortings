#include<iostream>
#include<vector>
#include<utility>

using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	
	vector<int> degree(n+1,0);
	
	for(int i=0;i<m;i++) {
		int u,v;
		cin>>u>>v;
		degree[u]++;
		degree[v]++;
	}
		for(int i=1;i<=n;i++) {
			cout<<degree[i]<<endl;
		}
 	
	return 0;
}
