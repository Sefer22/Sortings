#include<iostream>

using namespace std;

void print_array(int[],int);
void quick_sort(int[],int,int);
int partitation(int[],int,int);

int main()  {
	int A[]={4,7,1,8,5,9,3,6,2,0};
	int n= sizeof(A)/sizeof(A[0]);
	cout<<"Before Sorting Array :\n";
	print_array(A,n);
	quick_sort(A,0,n-1);
	cout<<"After Sorting Array :\n";
	print_array(A,n);
	
	return 0;
}
int partitation(int arr[],int left,int right) {
	int pivot=arr[right];
	int i=left-1;
	for(int j=left;j<right;j++) 
		if(arr[j] <= pivot) {
			i++;
			swap(arr[j],arr[i]);
		}
		swap(arr[i+1],arr[right]);
		return i+1;
	
}
void quick_sort(int arr[],int left,int right) {
	if(left < right) {
		int pivot_index = partition(arr,left,right);
		quick_sort(arr,left,pivot_index-1);
		quick_sort(arr,pivot_index+1,right);
	}
	
}

void print_array(int arr[],int size) {
	for(int i=0;i<size;i++) cout<<arr[i]<<" ";
	cout<<endl;
}
