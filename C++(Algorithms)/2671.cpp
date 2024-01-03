#include<iostream>
#include<vector>

using namespace std;

int main()  {
	int N,M,W;
	cin>>N>>M>>W;
	
	vector<vector<char> > Mine(N,vector<char>(M,' '));
	
	for(int i=0;i<W;i++) {
		int row,col;
		cin>>row>>col;
		Mine[row-1][col-1]='*';
	}
	
	for(int i=0;i<N;i++) {
		for(int j=0;j<M;j++) {
		   cout<<Mine[i][j] <<" ";
		}
		cout<<endl;
	}
	
	
	
	return 0;
}
