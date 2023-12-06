#include<iostream>

using namespace std;

void bubble_sort(int arr[],int size) {
	for(int i=0;i<size;i++) {
		for(int j=1;j<size-i;j++) {
			if(arr[j-1] >arr[j] ) {
				int temp=arr[j];
				arr[j] = arr[j-1];
				arr[j-1]=temp;
			}
		}
	}
 	
}

int main() {
	
	int arr[1000],size;
	cin>>size;
	
	for(int i=0;i<size;i++) {
		cin>>arr[i];
	}
	
	bubble_sort(arr,size);
	
	for(int i=0;i<size;i++) {
		cout<<arr[i];
	}
	
	
	return 0;
}
