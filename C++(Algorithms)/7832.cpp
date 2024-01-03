#include<iostream>
#include<vector>

using namespace std;

int main()  {
	int n,count=0;
	cin>>n;
	vector<int> v(n);
	
	for(int i=0;i<n-1;i++) {
		cin>>v[i];
	}
	
	int biggest=v[0];
	for(int i=0;i<n;i++) {
		if(v[i] > biggest) {
			biggest=v[i];
		}
	}
	for(int i=0;i<n;i++) {
		if(biggest==v[i]) {
			count++;
		}
	}
	
	cout<<count;
	
	
	return 0;
}
