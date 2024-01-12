#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n;
	cin>>n;
	
	vector<int> A(n);
	
	for(int i=0;i<n;i++) {
		cin>>A[i];
	}
	
	int last=A[n-1];
	for(int i=n-1;i>=0;i--) {
		A[i]=A[i-1];
	}
	A[0]=last;
	for(int i=0;i<n;i++) {
		cout<<A[i]<<" ";
	}
	
	return 0;
}
