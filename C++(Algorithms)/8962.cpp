#include<iostream>
#include<vector>

using namespace std;

int main()  {
	int n;
	cin>>n;
	vector<int> v(n);
	
	for(int i=0;i<n;i++) {
		cin>>v[i];
	}
	
	int biggest=v[n-1];
	for(int i=0;i<n-1;i++) {
		if(v[i] > biggest) {
			biggest=v[i];
		}
	}
	v[n-1]=biggest;
 	
 	for(int i=0;i<n;i++) {
 		cout<<v[i]<<" ";
	 }
	
	return 0;
}
