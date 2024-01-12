#include<iostream>

using namespace std;

int fiveCount(int n) {
	int count=0;
	
	if(n==0) {
		return 0;
	}
	
		int digit=n%10;
		if(digit==5) {
			count++;
		}
			return count + fiveCount(n/10);	
    
}

int main() {
	int n;
	cin>>n;
	
	int res=fiveCount(n);
	cout<<res;
	return 0;
}
