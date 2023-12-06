#include<iostream>

using namespace std;
int binary_search(int[],int,int,int);

int main() {
	int n,q,searched;
	cin>>n;
	cin>>q;
	int arr[n];
	
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	for(int i=0;i<q;i++) {
		cin>>searched;
		if(binary_search(arr,0,n-1,searched) != -1) cout<<"YES\n";
		else cout<<"NO\n";
	}
	
}
int binary_search(int arr[],int first,int last,int searched) {
	while(last>=first) {
		int middle = first+(last-first)/2;
		if(searched==middle) return middle;
		else if(searched>middle) first++;
		else last--;
		
	}
	return -1;
}
	

