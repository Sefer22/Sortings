#include<iostream>

using namespace std;

int a[] = {7,1,5,3,2,4,8,0};
int b[8];

void combine(int begin,int middle,int end) {
	int i,j,k;
	for(i=begin;i<=end;i++)
	b[i]=a[i];	
	i=begin;
	j=middle+1;
	k=begin;
	
	while(i<=middle && j<=end) {
		if(b[i] <= b[j])
		a[k++] = b[i++];
		else
		a[k++] = b[j++];
	}
	
	while(i<=middle)
	a[k++] = b[i++];
}
void divide(int begin,int end) {
	if(begin<end) {
		int middle=(begin+end)/2;
		divide(begin,middle);
		divide(middle+1,end);
		
		combine(begin,middle,end);
	}
}
int main() {
	divide(0,7);
	
	for(int i=0;i<8;i++) {
		cout<<a[i]<<" ";
	}
	
	
	return 0;
}
