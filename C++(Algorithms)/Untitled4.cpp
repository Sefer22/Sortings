#include<iostream>

using namespace std;

int Fib(int n) {
	if(n<2) return n;
	return Fib(n-2) + Fib(n-1);
}

int main()  {
	int n;
	cin>>n;
	cout<<Fib(n)<<endl;
	
	return 0;
}
