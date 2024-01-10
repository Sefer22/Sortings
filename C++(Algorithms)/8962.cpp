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
	
	int max=A[n-1],maxindex=n-1;;
	for(int i=n-2; i >= 0;i--) {
		if(A[i] > max) {
			max=A[i];
			maxindex=i;
		}
	}
	
	swap(A[maxindex],A[n-1]);
	for(int i=0;i<n;i++) {
		cout<<A[i]<<" ";
	}
	
	return 0;
}
