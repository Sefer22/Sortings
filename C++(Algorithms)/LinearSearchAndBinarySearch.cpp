#include<iostream>

using namespace std;

bool binarySearch(int arr[],int begin,int end,int searched) {
	int middle=arr[(begin+end)/2];
       while(end>=begin) {
       	if(middle=searched)
       	return true;
       	if(searched<middle)
       	end--;
       	if(searched>middle)
       	begin++;
	   }
	   return false;
	}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	int searched;
	cin>>searched;
	
	bool result = binarySearch(arr,0,n-1,searched);
	cout<<result;
	
	return 0;
}







//#include<iostream>
//
//using namespace std;
//
//int linearSearch(int arr[],int size,int searched) {
//	for(int i=0;i<size;i++) {
//		if(searched==arr[i]) {
//			return i;
//		}
//	}
//	return -1;
//	
//}
//
//int main()  {
//	int n;
//	cin>>n;
//	int arr[n];
//	
//	for(int i=0;i<n;i++) {
//		cin>>arr[i];	
//   }
//   
//   int searched;
//   cin>>searched;
//   
//   int result=linearSearch(arr,n,searched);
//   cout<<result;
//	
//	return 0;
//}
