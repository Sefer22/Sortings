#include<iostream>

using namespace std;

struct Student{
	string name;
	string surname;
	int number;
};

int main() {
	struct Student students[3];
	int i=0;
	for(i = 0; i < 3;i++) {
		cout<<"Write student's data";
	  cin >> students[i].name >>students[i].surname >> students[i].number;

		
	}
	for(i = 0; i < 3;i++) {
	
	cout << students[i].name << "," << students[i].surname << "," << students[i].number;

	}
	
	return 0;
}
