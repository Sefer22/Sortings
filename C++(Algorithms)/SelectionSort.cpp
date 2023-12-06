#include<iostream>

using namespace std;

void selection_sort(int arr[],int size){
	int i,j;
	int minimumIndex;
	
	for(i=0;i<size;i++) {
		minimumIndex=i;
		for(j=i;j<size;j++) {
			if(arr[j] < arr[minimumIndex]) {
				minimumIndex=j;
			}
		}
		int temp=arr[i];
		arr[i]=arr[minimumIndex];
		arr[minimumIndex]=temp;
	}
}

int main()  {
	
	int array[50],size;
	int i;
	
	cout<<"Elementlerin sayini daxil edin";
	cin>>size;
	
	for(i=0;i<size;i++) {
		cin>> array[i];
	}
	
	selection_sort(array,size);
	
	for(i=0;i<size;i++) {
		
		cout<<array[i]<<" ";
	}
	
	return 0;
}
