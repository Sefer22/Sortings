#include<iostream>

using namespace std;

bool allEven(int n) {
	if(n==0) {
		return true;
	} else {
		int sonReqem=n%10;
		if(sonReqem%2 != 0) {
			return false;
		} else {
			return allEven(n/10);
		}
	}
	
}

int main()  {
	int n;
	cin>>n;
	
	if(allEven(n)) {
		cout<<"YES"<<endl;
	}else cout<<"NO"<<endl;
	
	
	return 0;
}
