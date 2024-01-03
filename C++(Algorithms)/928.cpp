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
	int smallest=v[0];
	int biggest=v[0];
	for(int i=0;i<n;i++) {
		if(v[i] < smallest) {
			smallest=v[i];
		}if(v[i] > biggest) {
			biggest=v[i];
		}
	}
	
	cout<<biggest+smallest;
	
	
	return 0;
}
