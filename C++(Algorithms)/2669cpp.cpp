#include<iostream>
#include<vector>

using namespace std;
 
int main()  {
	int N,M;
	cin>>N>>M;
	
	vector<vector<int> > matrix(N,vector<int>(M,0));
	
	for(int i=0;i<N;i++) {
		for(int j=0;j<M;j++) {
			cin>>matrix[i][j];
		}
	}
	cout<<M<<" "<<N<<endl;
	for(int j=0;j<M;j++) {
		for(int i=N-1;i>=0;i--){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	
	return 0;
}
