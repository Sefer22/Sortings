#include<iostream>

using namespace std;

struct Address{
	string district;
	string avenue;
	string street;
};

struct Student{
	string name;
	string surname;
	int number;
	int age;
	struct Address address;
	
};

int main() {
	struct Student student;
	student.name = "Safar";
	student.surname = "Jafarli";
	student.number = 636;
	student.age = 20;
	student.address.district = "Barrat";
	student.address.avenue = "Termo";	
	student.address.street = "Jogador";
	cout<<student.name<<","<<student.surname<<","<<student.number<<","<<student.age<<","<<
	student.address.district<<","<<student.address.avenue<<","<<student.address.street;
	
	
	
	return 0;
}
