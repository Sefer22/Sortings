#include<iostream>

using namespace std;

void bubble_sort(int arr[],int size) {
	int i,j;
	
	for(i=0;i<size;i++) {
		for(j=0;j<size-i-1;j++) {
			if(arr[j] > arr[j+1]) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1]=temp;
			}
			
		}
	}
}

int main() {
	int array[100],n;	
	cin>>n;
	
	for(int i=0;i<n;i++) {
		cin>>array[i];
	}
	
	bubble_sort(array,n);
	
	int count=0;
	for(int i=0;i<n;i++) {
		if(i==0 || array[i] != array[i-1]) {
			array[count++]=array[i];
		}
	}
	
	if(n%2==0) {
		for(int i = count-1;i>=0;--i) {
			cout<<array[i] <<" ";
		}
	}else {
		for(int i=0;i<count;++i) {
			cout<<array[i]<<" ";
		}
	}
	
	
	return 0;
}
