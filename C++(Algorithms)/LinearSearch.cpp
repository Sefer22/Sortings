#include<iostream>


using namespace std;

int linearSearch(int n,int array[],int searched){
	for(int i=0;i<n;i++) {
		if(searched==array[i]) 
			return i;
		
		
	}
	return -1;
	
}


int main()  {
	int n;
	cout<<"Arrayin uzunlugunu gir:";
	cin>>n;
	int array[n];

	for(int i=0;i<n;i++) {
		cin>>array[i];
	}
	int searched;
	cout<<"Axtardigin reqemi gir:";
	cin>>searched;
	
	int result = linearSearch(n,array,searched);
	if(result==-1)
	cout<<"Axtardigin reqem arrayda yoxdur\n";
	else cout<<"Axtaridigin reqem arrayda var";

	return 0;
}
