#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

int main() {
	int n;
	cin>>n;
	vector<double> v(n);
	
	for(int i=0;i<n;i++) {
		cin>> v[i];
	}
	double smallest=v[0];
	for(int i=1;i<n;i++) {
		if(v[i] < smallest) {
			smallest=v[i];
		}
	}	
	
	cout<< fixed << setprecision(2) << smallest*2;
	return 0;
}
