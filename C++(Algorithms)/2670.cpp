#include<iostream>
#include<vector>

using namespace std;

int main()  {
	int M,N,x,y;
	cin>>M>>N>>x>>y;
	
	vector<pair<int,int> > neighbors;
	
	if(y-1>=1) {
		neighbors.push_back({x,y-1});
	}
	
	if(y+1<=N) {
		neighbors.push_back({x,y+1});
	}
	
	if(x-1>=1) {
		neighbors.push_back({x-1,y});
	}
	if(x+1<=M) {
		neighbors.push_back({x+1,y});
	}
	
	for(const auto& neighbor: neighbors) {
		cout<<neighbor.first<<" "<< neighbor.second<<endl;
	}
	
	return 0;
}
