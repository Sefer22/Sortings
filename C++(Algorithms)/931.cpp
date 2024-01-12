#include<iostream>
#include<iomanip>
using namespace std;

double Rel(int n,int &sum,int &multiple) {

	if(n<10) {
		return static_cast<double>(multiple)/sum;
	} else {
	
		int digit = n%10;
		sum += digit;
		multiple *= digit;
	    Rel(n/10,sum,multiple);
	    return static_cast<double>(multiple)/sum;
   }
}

int main() {
	int n;
	cin>>n;
	int sum=0,multiple=1;
	
	double res=Rel(n,sum,multiple);
	
	cout<<fixed<<setprecision(3)<<res;
	return 0;
}
