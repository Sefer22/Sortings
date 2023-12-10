#include<iostream>

using namespace std;

struct Student{
	string name;
	string surname;
	int number;
};

void show(struct Student s) {
	cout<<s.name<<s.surname<<s.number;
}

struct Student getData() {
	struct Student st;
	cin>>st.name>>st.surname>>st.number;
	
	return st;
}


int main() {
	struct Student student=getData();
	show(student);
	
	
	return 0;
}
