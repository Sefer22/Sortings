#include<iostream>
#include<set>

using namespace std;

int main() {
	int n;
	cin>>n;
	
	set<int> uniqueElements;
	
	for(int i=0;i<n;i++) {
		int element;
		cin>>element;
		uniqueElements.insert(element);
	}
	
	for(int element:uniqueElements ) {
		cout<<element<<" ";
	}
	
	return 0;
}
