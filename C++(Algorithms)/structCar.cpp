#include<iostream>

using namespace std;

struct Car{
	int tekerSayi;
	int vitesSayi;
	int model;
	float motor;
	int atGucu;
}car1,car2;

int main() {
	
	car1 = {4,6,2011,3.0,300};
	car2=car1;
	
	cout<<car.tekerSayi<<","<<car.vitesSayi<<","<<car.model<<","<<car.motor<<","<<car.atGucu;
	
	
	return 0;
	
}
