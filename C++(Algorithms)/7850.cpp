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
	
	map<int,int> elementsCount;
	
	for(int i=0;i<n;i++) {
		elementsCount[A[i]]++;
	}
	
	for(int i=0;i<n;i++) {
		if(elementsCount[A[i]]==1) {
			cout<<A[i]<<" ";
		}
	}
	
	
	return 0;
}
