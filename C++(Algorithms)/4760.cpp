#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n,zero=0;
	cin>>n;
	
	vector<int> A(n);
	for(int i=0;i<n;i++) {
		cin>>A[i];
	}
	
	for(int i=0;i<n;i++) {
		if(A[i] != 0) {
			cout<<A[i] <<" ";
		}else{
			zero++;
		}
	}
	for(int i=0;i<zero;i++) {
		cout<<"0";
	}
	
	return 0;
}
