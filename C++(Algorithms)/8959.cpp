#include<iostream>
#include<vector>

using namespace std;

int main()  {
	int n;
	cin>>n;
	
	vector<int> numbers(n);
	
	for(int i=0;i<n;i++) {
		cin>>numbers[i];
	}
	int max=numbers[0];
	int min=numbers[0];
	
	for(int i=0;i<n;i++) {
		if(numbers[i] > max) {
			max=numbers[i];
		}
		if(numbers[i] < min) {
			min=numbers[i];
		}
	}
	cout<<max-min<<endl;
	
	return 0;
}
