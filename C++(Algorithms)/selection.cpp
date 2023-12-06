#include<iostream>

using namespace std;

void selection_sort(int arr[],int size) {
	int minindex;
	for(int i=0;i<size;i++) {
		minindex=i;
		for(int j=i;j<size;j++) {
			if(arr[j] < arr[minindex] ) {
				minindex=j;
			}
		}
		int temp=arr[i];
		arr[i] = arr[minindex];
		arr[minindex] = temp;
	}
}
 
int main()  {
	int arr[1000],size;
	cin>>size;
	
	for(int i=0;i<size;i++) {
		cin>>arr[i];
	}
	
	selection_sort(arr,size);
	
	for(int i=0;i<size;i++) {
		cout<<arr[i]<<" ";
	}
	
	
	return 0;
}
