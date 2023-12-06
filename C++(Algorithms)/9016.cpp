#include <iostream>

using namespace std;

int binary_search(int, int[], int, int);
int main()
{
    int size, numofsearched, searched,count=0;
    cin >> size;
    cin >> numofsearched;
    int arr[size];
    
    
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < numofsearched; i++)
    {
        cin >> searched;
        if(binary_search(searched, arr, 0, size - 1) == arr[i])
            count++;
            cout<<count;
    }  
}

int binary_search(int searched, int arr[], int left, int right)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == searched) return mid;
        else if (arr[mid] > searched) right = mid - 1;
        else left = mid + 1;
    }
    return -1;
}
