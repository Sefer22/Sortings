#include<iostream>

using namespace std;

int multiple(long long n) {
	int mul=1;
	
	while(n>0) {
		int endNum=n%10;
		if(endNum%2==0) {
			mul=mul*endNum;
		}
		n=n/10;
	}
	if(mul==1) return -1;
	else return mul;	
}
int main() {
	long long n;
	cin>>n;
	
	if(multiple(n)!=-1) cout<<multiple(n);
	else cout<<-1;
	
	
	return 0;
}
