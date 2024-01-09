#include<iostream>
#include<vector>

using namespace std;

int main()  {
	int n,m;
	cin>>n>>m;
	
	vector<int> Degree(n+1,0);
	
	for(int i=0;i<m;i++) {
		int u,v;
		cin>>u>>v;
		Degree[u]++;
		Degree[v]++;
	}
	
	for(int i=1;i<=n;i++) {
		if(Degree[i] != Degree[1]) {
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	
	return 0;
}
