#include<iostream>
#include<cmath>

struct Triangle{
	int a,b,c;
	
float area() {
	float hp=(a+b+c)/2.0;
	return sqrt(hp*(hp-a)*(hp-b)*(hp-c));
}	
bool isTriangle() {
	return (a+b>c && a+c>b > b+c>a )
}
float operator + (Triangle A,Triangle B) {
	return A.area() + B.area();
}
void set_val(Triangle &T) {
	cin>>T.a>>T.b>T.c;
 }
};

using namespace std;

int main() {
	int n=2;
	Triangle T[n];
	for(int i=0;i<n;i++) {
		set_val(T[i]);
	}
	
	if(T[0].isTriangle() && T[1].isTriangle())  {
		cout<<T[0] + T[1];
	}else {
		if(T[0].isTriangle()) cout<<T[0].area();
		if(T[1].isTriangle()) cout<<T[1].area();
	}
	
	return 0;
}
