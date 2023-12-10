#include<iostream>
#include<cmath>

using namespace std;

struct Triangle {
	int a,b,c;
	
float area() {
	float hp;
	hp=(a+b+c)/2.0;	
	return sqrt(hp*(hp-a)*(hp-b)*(hp-c));
}	
bool isTriangle() {
	return (a+b>c && a+c>b && b+c>a);
	}	
};
float operator + (Triangle A,Triangle B) {
	return A.area() + B.area();
} 
void set_val(Triangle &T) {
	cin>>T.a>>T.b>>T.c;
}
int main() {
	struct Triangle T1,T2;
	set_val(T1);
	set_val(T2);
	if(T1.isTriangle() && T2.isTriangle()) cout<<T1+T2;
	else {
		if(T1.isTriangle()) cout<<T1.area();
		if(T2.isTriangle()) cout << T2.area();
 	}
 	
	return 0;
}
