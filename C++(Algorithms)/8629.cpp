#include<iostream>

using namespace std;

bool oneOdd(int n) {
	if(n==0) {
		return false;
	}else {
		int endNumber=n%10;
		if(endNumber%2==1) {
			return true;
		}else {
			return oneOdd(n/10);
		}
	}
	
}

int main() {
	int n;
	cin>>n;
	
	if(oneOdd(n)) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
	
	return 0;
	
}
