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
	
	int min=A[0],minindex=0;
	for(int i=0;i<n;i++) {
		if(A[i] < min) {
			min=A[i];
			minindex=i;
		}
	}
	swap(A[0],A[minindex]);
	for(int i=0;i<n;i++) {
		cout<<A[i] <<" "; 
	}
	
	
	return 0;
}
