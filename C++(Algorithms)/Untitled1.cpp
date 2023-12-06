#include<iostream>

using namespace std;

int find_max(int[],int);
int counting_sort(int[],int,int);
void print_array(int[],int);

int main() {
	int A[] = {4,2,7,3,1,4,2,0,7,4};
	int size=sizeof(A)/sizeof(int);
	int M=find_max(A,size);
	counting_sort(A,size,M);
	print_array(A,size);
	
	return 0;
}
int counting_sort(int arr[],int size,int M) {
	int T[M+1]={};
	int res[size]={},r=0;
	for(int i=0;i<size;i++) T[arr[i]]++;
	for(int i=1;i<M+1;i++) T[i] += T[i-1];
	for(int i=size-1;i>=0;i--) {
		res[T[arr[i]] -1] = arr[i];
		T[arr[i]]--; 
	}	
	
}
int find_max(int arr[],int size) {
	int M=arr[0];
	for(int i=1;i<size;i++0 ) {
		if(arr[i] > M) M=arr[i];
		return M;
	}
	
}

void print_array(int arr[].int size) {
	for(int i=0;i<size;i++) cout<<arr[i] <<"";
	cout<<endl;
	}
}



