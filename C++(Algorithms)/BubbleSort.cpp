#include<iostream>

using namespace std;

void bubble_sort(int arr[],int size) {
	int i,j;
	
	for(i=0;i<size;i++){
		for(j=1;j<size-i;j++) {
			if(arr[j-1] > arr[j]) {
				int temp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
			}
		}		
	}
}

int main() {
	int array[100],size;
	int i;
	cout<<"Elementlerin sayini daxil edin..";
	cin>>size;
	
	for(i=0;i<size;i++) {
		cin>>array[i];
	}
 	bubble_sort(array,size);
 	
 	for(i=0;i<size;i++) {
 		cout<< array[i]<<" ";
	 }
	
	return 0;
}
