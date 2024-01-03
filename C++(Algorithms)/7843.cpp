#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> v(n);
	
	for(int i=0;i<n-1;i++) {
		cin>>v[i];
	}
	
	for(int i=1;i<=n;i++) {
		if(v[i] != i) {
			cout<<i;
		}
	}
	
	return 0;
}
