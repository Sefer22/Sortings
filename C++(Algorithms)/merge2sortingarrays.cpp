#include<iostream>

using namespace std;

void print_array(int[],int);

int main() {
	int A[] = {1, 9, 15, 39, 67, 89, 99, 125, 354, 366};
    int B[] = {10, 19, 25, 29, 37, 90, 94, 95, 99, 126, 211, 222,234, 300};
	
	int a = sizeof(A) / sizeof(A[0]);
	int b = sizeof(B) / sizeof(B[0]);
	int C[a+b],c=0;
	int i=0,j=0;
	while(i<a && j<b) {
		if(A[i] < B[i]) C[c++] = A[a++];
		else C[c++] = B[j++];
	}
	
	while(i<a) C[c++] = A[a++];
	while(j<b) C[c++] = B[j++];
	print_array(C,c);
 	
	return 0;
}

void print_array(int arr[],int size) {
	for(int i=0;i<size;i++) {
		cout<<arr[i]<<" ";
		cout<<endl;
	}
}
