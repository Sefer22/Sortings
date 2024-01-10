#include<iostream>

using namespace std;

void insertion_sort(int arr[],int size) {
	int element;
	for(int i=1;i<size;i++) {
		element=arr[i];
		int j=i-1;
		while(j>=0 && arr[j] > element) {
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=element;
		
		for(int k=0;k<size;k++) {
			cout<<arr[k]<<" ";
		}
		cout<<endl;
	}
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	
	insertion_sort(arr,n);
	
	return 0;
}
