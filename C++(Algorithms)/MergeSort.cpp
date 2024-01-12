#include<iostream> 

using namespace std;

int a[]={7,1,5,3,2,4,8,0};
int b[8];
void merge(int begin,int mid,int end) {
	int i,j,k;
	for(i=begin;i<=end;i++) {
		b[i]=a[i];
	}
	
	i=begin;//b arrayinda
	j=mid+1;//b arrayinda
	k=begin;//a arrayinda
	
	while(i<=mid && j <= end) {
		if(b[i] < b[j]) {
			a[k++]=b[i++];
		}
		else{
			a[k++]=b[j++];
		}
	}
	
	while(i<=mid) {
		a[k++]=b[i++];
	}
}

void divide(int begin,int end) {
	if(begin<end) {
		int mid=(begin+end)/2;
		divide(begin,mid);
		divide(mid+1,end);
		
		merge(begin,mid,end);
	}
	
}

int main() {
	divide(0,7);
	
	for(int i=0;i<8;i++) {
		cout<<a[i]<<" ";
	}
	return 0;
}
