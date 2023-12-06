#include<iostream>

using namespace std;

string countingSort(string s) {
	const int CHAR_RANGE=256;
	
	int count[CHAR_RANGE] ={0};
	
	for(int i=0;i<s.length();i++) {
		count[s[i]]++;
	}
	string sortedString = "";
	
	for(int i=0;i< CHAR_RANGE;i++) {
		while(count[i] > 0) {
			sortedString += char(i);
			count[i]--;
		}
	}
	return sortedString;
} 
int main() {
	string s = "geeksforgeeks";
	string siraString=countingSort(s);
	
	cout<<"Siralanmis String " << siraString <<endl;
	
	return 0;
}
