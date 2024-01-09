#include<iostream>
#include<vector>

using namespace std;

int main()  {
	int n,m;
	cin>>n>>m;
	
	vector<int> tunnelCount(n+1,0);
	
	for(int i=0;i<m;i++) {
		int a,b;
		cin>>a>>b;
		tunnelCount[a]++;
		tunnelCount[b]++;
	}
	
	for(int i=1;i<=n;i++) {
		cout<<tunnelCount[i]<<" ";
	}
	
	
	return 0;
}
