#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> A(n);
	
	for(int i=0;i<n;i++) {
		cin>>A[i];
	}
	map<int,bool> seen;
	for(int i=0;i<n;i++) {
		if(!seen[A[i]]) {
			
		}
 	}
	
	return 0;
}
