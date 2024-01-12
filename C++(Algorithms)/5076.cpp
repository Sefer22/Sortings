#include<iostream>
#include<vector>
#include<utility>

using namespace std;

int main()  {
	int n,m;
	cin>>n>>m;
	
	vector<pair<int,int> > edges(m);
	vector<int> degree(n+1,0);
		
	for(int i=0;i<m;i++) {
		cin>>edges[i].first>>edges[i].second;
		degree[edges[i].first]++;
		degree[edges[i].second]++;
	}	
	
	for(int i=1;i<=n;i++) {
		if(degree[i] != degree[1]) {
			cout<<"NO"<<endl;
			return 0;
		}
	}
	
	cout<<"YES"<<endl;
	return 0;
}
