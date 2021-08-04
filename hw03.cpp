#include <iostream>
using namespace std;
#define size 10

int main() {
    int arr[size];
    for(int i=0; i<size; i++)
        arr[i] = i;
    int temp, start=0, end=sizeof(arr)/sizeof(arr[0]) -1;
	while(start < end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
    for(int i=0; i<size; i++)
        cout<< "arr[" << i << "] = " << arr[i] <<endl;
	return 0;
}