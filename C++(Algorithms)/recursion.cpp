#include<iostream>

using namespace std;

long long F(long long);



int main() {
	long long n;
	cin>>n;
	cout<<F(n);
	
	return 0;
}

long long F(long long n) {
	if(n==0) return 1;
	return n*F(n-1);
}
