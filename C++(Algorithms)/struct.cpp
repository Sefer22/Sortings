#include<iostream>

using namespace std;


struct Student{
	char name[15];
	char surname[15];
	int telNumber;
	int age;
	
};

int main() {
	struct Student student = {"Safar","Jafarli",636,20};
	
	cout<<student.name<<student.surname<<student.telNumber<<student.age;
	
	
	return 0;
}
