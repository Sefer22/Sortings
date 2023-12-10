#include<iostream>

using namespace std;

struct Student {
	long long std_num;
	string name, surname;
	float ave;
};

bool operator > (Student A,Student B) {
	return A.ave> B.ave;
}

bool operator < (Student A,Student B) {
	return A.ave <B.ave;
}

int main() {
	struct Student s1,s2;
	cin >> s1.std_num >> s1.name >> s1.surname >> s1.ave;	
	cin >> s2.std_num >> s2.name >> s2.surname >> s2.ave;
	
	if(s1 > s2)
		cout << s1.name <<" results higher than " << s2.name << endl;
	else
		if(s1 < s2)
			cout << s2.name <<" results higher than " << s1.name << endl;
			else cout << "Their results are same\n";
	
	
	return 0;
}
