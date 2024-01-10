#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n,count=0;
	cin>>n;
	
	vector<int> A(n);
	
	for(int i=0;i<n;i++) {
		cin>>A[i];
	}
	
	for(int i=1;i<n-1;i++) {
		if(A[i-1]%2==0 && A[i+1]%2==0) {
			count++;
		}
	}
	
	cout<<count<<endl;
	
	return 0;
}
