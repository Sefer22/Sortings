#include<iostream>

using namespace std;

int numberOfOdd(long long n) {
	int count=0;
	if(n==0) {
		return 0;
	} else{
		int endNum=n%10;
		if(endNum%2==1) {
			count++;			
		}
			return count+numberOfOdd(n/10);		
	}
}
int main()  {
	long long n;
	cin>>n;
	int count=numberOfOdd(n);
	cout<<count;
	
	
	return 0;
}
