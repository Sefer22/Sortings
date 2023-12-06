#include<iostream>
#include<set>
#include<vector>
#include<list>
using namespace std;

int main() {
	set<int> s;
	cout<<s.empty()<<endl;
	s.insert(5);
	cout<<s.empty()<<endl;
	
	return 0;
}
