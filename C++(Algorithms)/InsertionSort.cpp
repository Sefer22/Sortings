#include<iostream>

using namespace std;

void insertion_sort(int arr[],int size) {
	int i,j;
	int element;
	
	for(i=1;i<size;i++){
		element=arr[i];
		j=i-1;
		
		while(j>=0 && arr[j] > element ) {
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=element;
		
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
	insertion_sort(array,size);
	
	for(i=0;i<size;i++) {
		cout<< array[i]<<" ";
	}	
	
	return 0;
}
