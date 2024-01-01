#include<iostream>

using namespace std;

int main()  {
	int n,k=0;
	cin>>n;
	int A[n];
	
	for(int i=0;i<n;i++) {
		cin>>A[i];
	}
	int m;
	cin>>m;
    int B[m];
		
	for(int j=0;j<m;j++) {
		cin>>B[j];
	}
	
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			if(A[n] != B[m]) {
				k++;
				
			}
		}
	}
	cout<<k<<endl;
	
		for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			if(A[n] != B[m]) {
                cout<<A[i];
				
			}
		}
	}
	
	return 0;
}
