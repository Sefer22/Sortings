#include<iostream>

using namespace std;

void merge_sort(int[],int,int);
void merge(int[],int,int,int);
void print_array(int[],int);

int main() {
	int A[]={4,2,6,9,1,0,8,5,6,3};
	int n = sizeof(A) / sizeof(A[0]);
	cout<<"Unsorted Array :\n";
	print_array(A,n);
	
	merge_sort(A,0,n-1);
	cout<<"Sorted array :\n";
	print_array(A,n);
	
	return 0;
}
void merge(int arr[],int left,int mid,int right) {
	int n1=mid-left+1;
	int n2 = right-mid;
	int L[n1],R[n2];
	for(int i=0;i<n1;i++) L[i]=arr[left+i];
	for(int i=0;i<n2;i++) R[i]=arr[mid+i+1];
	int i=0,j=0,k=left;
	while(i<n1 && j<n2) {
		if(L[i] < R[j]) arr[k++] = L[i++];
		else arr[k++] = R[j++];
	}
	while(i<n1) arr[k++] = L[i++];
	while(i<n2) arr[k++] = R[j++]; 
	
}
void merge_sort(int arr[]arr[],int left,int right ) {
	if(left<right) {
		int mid=(left+right)/2;
		merge_sort(arr,left,mid);
		merge_sort(arr,mid+1,right);
		
		merge(arr,left,mid,right);
	}
	
}
void print_array(int arr[],int size) {
	for(int i=0;i<size;i++) cout<<arr[i]<<" ";
	cout<<endl;
}
