#include<iostream>

using namespace std;

int F(int[],int,int);

int main()  {
	int A[]={4,7,1,8,5,9,3,6,2,0};
	int n=sizeof(A)/sizeof(A[0]);
	cout<<"Sum of numbers of Array is : " << F(A,0,n);
	
	return 0;
}
int F(int arr[],int i,int size) {
	if(i==size) return 0;
	return arr[i] + F(arr,i+1,size);
}

