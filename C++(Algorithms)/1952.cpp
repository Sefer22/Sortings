#include<iostream>
#include<vector>
using namespace std;

int main()  {
	int n;
	cin>>n;
	vector<int> A(n);
	
	for(int i=0;i<n;i++) {
		cin>>A[i];
	}
	int max=A[0],min=A[0];
	for(int i=0;i<n;i++) {
		if(A[i] > max) {
			max=A[i];
		}
		if(A[i] < min) {
			min=A[i];
		}
	}
	for(int i=0;i<n;i++) {
		if(A[i] != max) {
			cout<<A[i]<<" ";
		}
		else if(A[i]==max) {
			cout<<min;
		}
	}

	return 0;
}
