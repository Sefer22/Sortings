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
	
	int min=A[0];
	for(int i=0;i<n;i++) {
		if(A[i] < min) {
			min=A[i];
		}
	}
	
	for(int i=0;i<n;i++) {
		if(A[i]==min) {
		int temp=A[i];
		for(int j=i;j>0;j--) {
			A[j]=A[j-1];
		}	
		A[0]=temp;
		}
	}
	
	for(int i=0;i<n;i++) {
		cout<<A[i]<<" ";
	}
	
	
	return 0;
}
