#include<iostream>

using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	int m;
	cin>>m;
	int b[m];
	for(int j=0;j<m;j++) {
		cin>>b[j];
	}
	int i,j;
	int differentCount=0;
	for(i=0;i<n;i++) {
		bool found=false;
		for(j=0;j<m;j++) {
			if(a[i]==b[j]) {
			found=true;
			break;
			}
	}
	if(!found) {
		differentCount++;
	}
}
		cout<<differentCount<<endl;
		for(i=0;i<n;i++) {
		bool found=false;
		for(j=0;j<m;j++) {
			if(a[i]==b[j]) {
			found=true;
			break;
			}
	}
	if(!found) {
		cout<<a[i]<<" ";
	}
}
	return 0;
}
