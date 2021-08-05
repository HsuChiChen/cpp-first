//影片P46
//bubble sort

#include <iostream>
using namespace std;

int main() {
	int arr[ ] = {4,2,8,0,5,7,1,3,9,0}; //can be modified by user
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Unsorted sequence:" << endl;
    for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
    cout << endl;
    
	for (int i = 0; i < size - 1; i++){
		for (int j = 0; j < size - 1 - i; j++){
			if (arr[j] > arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

    cout << "Sorted sequence:" << endl;
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
    cout << endl;
	return 0;
}
