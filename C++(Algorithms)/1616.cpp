#include<iostream>

using namespace std;

bool sadeEded(int n,int i=2) {
	if(n<=1 || (i<n&& n%i==0)) {
		return false;
	}else if(i<n){ 
		return sadeEded(n,i+1);
	}else {
		return true;
	}
}

int main()  {
	int n;
	cin>>n;
	if(sadeEded(n)) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	
	
	return 0;
}
