#include<iostream>

using namespace std;

struct Student{
	long long std_num;
	string name,surname;
	int age;
	float ave;
	bool isTeenager() {
		if(age>12 && age<20) return true;
		return false;
	}
};

int main() {
	struct Student st1,st2;
		cin >> s1.std_num >> s1.name >> s1.surname >> s1.age >> s1.ave;	
	    cin >> s2.std_num >> s2.name >> s2.surname >> s2.age >> s2.ave;
	
	if(s1.ave > s2.ave)
		cout << s1.name <<" results higher than " << s2.name << endl;
	else
		if(s1.ave < s2.ave)
			cout << s2.name <<" results higher than " << s1.name << endl;
			else cout << "Their results are same\n";
			
	if(s1.isTeenager()) cout << s1.name <<" " << s1.surname <<" is teeanger\n";
    if(s2.isTeenager()) cout << s2.name <<" " << s2.surname <<" is teeanger\n"; 		
	
	return 0;
}
