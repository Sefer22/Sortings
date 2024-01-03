#include<iostream>
#include<vector>

using namespace std;

int main()  {
	int N;
	cin>>N;
	
	vector<int> droidNumbers(N);
	
	for(int i=0;i<N;i++) {
		cin>>droidNumbers[i];
	}
	
	int smallest=droidNumbers[0];
	int prevSmallest=droidNumbers[0];
	for(int i=0;i<N;i++) {
		if(droidNumbers[i] <smallest) {
			prevSmallest=smallest;
			smallest=droidNumbers[i];
		}else if(droidNumbers[i] < prevSmallest && droidNumbers[i] != smallest) {
			prevSmallest=droidNumbers[i];
		}
	}
	
	cout<<smallest<<" "<< prevSmallest;
	
	return 0;
}
