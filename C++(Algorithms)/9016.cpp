#include<iostream>

using namespace std;

int binarySearch(int searched, int arr[], int begin, int end) {
    while (end >= begin) {
        int middle = begin + (end - begin) / 2;  
        if (arr[middle] == searched)z   
            return 1;
        if (arr[middle] > searched)
            end = middle - 1;  
        if (arr[middle] < searched)
            begin = middle + 1;  
    }
    return -1;
}

int main() {
    int n, q, searched;
    cin >> n >> q;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int j = 0; j < q; j++) {
        cin >> searched;
        
        binarySearch(searched,arr,0,n-1);
        
        int count=0;
        for(int k=0;k<n;k++) {
        	if(arr[k]==searched) count++;
		}
		cout<<count<<endl;
    }

    return 0;
}

