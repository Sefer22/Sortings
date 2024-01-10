#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n,sum=0;
	cin>>n;
	vector<int> A(n);
	
	for(int i=0;i<n;i++) {
		cin>>A[i];
	}
	int max=A[0];
	int min=A[0];
	
	
	for(int i=0;i<n;i++) {
		if(A[i] > max) {
			max=A[i];
		}
		if(A[i] < min) {
			min=A[i];
		}
	}
	for(int i=0;i<n;i++) {
		if(A[i] != min && A[i] !=max) {
			sum +=A[i];
		}
	}
	cout<<sum<<endl;
	
	
	return 0;
}
