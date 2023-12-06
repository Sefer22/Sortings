#include<iostream> 

using namespace std;

bool binary_search(int arr[],int first,int last,int searched) {
	while(last>=first) {
		int middle=arr[last+ (first-last)/2];
		if(middle==searched) return true;
		if(middle>searched) last--;
		if(middle<searched) first++;
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
	
	bool result = binary_search(arr,0,n-1,searched);
	if(result) cout<<"Yes";
	else cout<<"No";
	
	return 0;
}
