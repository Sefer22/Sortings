#include<iostream>

using namespace std;

void insertionsort(int arr[],int size) {
	int element;
	for(int i=1;i<n;i++) {
		element=arr[i];
		j=i-1;
		while(j>=0 && arr[j] > element) {
			arr[j]=arr[j+1];
			j--;
		}
		arr[j+1]=element;
	}
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	
	insertionsort(arr,n);
	
	
	return 0;
}
