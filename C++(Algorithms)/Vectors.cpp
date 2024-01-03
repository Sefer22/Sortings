#include<iostream>
#include<vector>

using namespace std;

int main()  {
	vector<int> v1(10);
	cout<<v1.size()<<endl;
	
	for(int i=0;i<v1.size();i++) {
		cout<<v1[i]<<" ";
	}	
	
	v1.push_back(100);
	
	return 0;
}
