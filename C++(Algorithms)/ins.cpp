#include<iostream>


using namespace std;

void insertion_sort(int arr[],int size) {
	int element;
	for(int i=1;i<size;i++) {
		element=arr[i];
		int j=i-1;
		
		while(j>=0 && arr[j] > element) {
			arr[j+1] =arr[j];
			j--;
		}
		arr[j+1]=element;
	}
	
}

int main() {
	int array[1000],size;
	cin>>size;
	
	for(int i=0;i<size;i++) {
		cin>>array[i];
	}
	insertion_sort(array,size);
	
	for(int i=0;i<size;i++) {
		cout<<array[i]<<" ";
	}
	
	
	return 0;
}
