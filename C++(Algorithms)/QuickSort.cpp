#include<iostream>

using namespace std;

void quickSort(int arr[],int begin,int end) {
	int i,j,pivot,temp;
	i=begin;
	j=end;
	pivot = arr[(begin+end)/2];
	
	do{
		while(arr[begin] < pivot)
		begin++;
		while(arr[end] > pivot)
		end--;
		if(begin<=end) {
			temp=arr[begin];
			arr[begin]=arr[end];
			arr[end]=temp;
			begin++;
			end--;
		}
		
	}while(begin<end);
	if(i < end) 
	quickSort(arr,i,end);
	if(begin < j)
	quickSort(arr,begin,j);
}

int main() {
	int n;
	cout<<"Arrayin uzunlugunu daxil edin :";
	cin>>n;
	int arr[n];
	
	cout<<"Arrayin elementlerini daxil edin";
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	
	quickSort(arr,0,n-1);
	
	for(int i=0;i<n;i++) {
		cout<<arr[i]<<" ";
	}
	
	
	return 0;
}
