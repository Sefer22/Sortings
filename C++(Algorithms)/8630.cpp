#include<iostream>

using namespace std;

int biggestNum(long long n,int maxDigit=0) {
	if(n==0) {
		return maxDigit;
	}else{
		int endNum=n%10;
		if(endNum>maxDigit) {
			maxDigit=endNum;
		}
		return biggestNum(n/10,maxDigit);
	}
}

int main() {
	long long n;
	cin>>n;
	
	int res=biggestNum(n);
	cout<<res;
	
	return 0;
}
