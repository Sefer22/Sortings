#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n,sum1=0,sum2=0,count=0;
	cin>>n;
	vector<int> v(n);
	
	for(int i=0;i<n;i++) {
		cin>>v[i];
	}
	for(int i=0;i<n;i++) {
		sum1=sum1+v[i];
	}
	for(int i=0;i<n;i++) {
		if(v[i] > sum1/n) {
			sum2=sum2+v[i];
			count++;
		}
	}
	
	cout<<sum2<<" "<<count;
	return 0;
}
