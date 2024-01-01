#include<iostream>

using namespace std;

void bubble_sort(int arr[],int size) {
	int i,j;
	for(i=0;i<size;i++) {
		for(j=1;j<size-i;j++) {
			if(arr[j]%10 < arr[j-1]%10 ) {
				int temp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
			}
			if((arr[j]%10 == arr[j-1]%10) && arr[j-1] > arr[j]) {
				int temp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
			}
		}
	}
} 

int main() {
	 
	 int n;
	 cin>>n;
	 int arr[n];
	 
	 for(int i=0;i<n;i++) {
	 	cin>>arr[i];
	 }
	 bubble_sort(arr,n);
	 
	 for(int i=0;i<n;i++) {
	 	cout<<arr[i] <<" ";
	 }
	
	
	return 0;
}