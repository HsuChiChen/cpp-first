//影片171
//選擇排序與函數模板
#include <iostream>
// #include <cstring>
using namespace std;

//swap
template<typename T>
void swap_num(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

//selection sort
template<typename T>
void select_sort(T arr, int len){
    for(int i=0; i<len-1; i++){
        int max = i; //認定最大值的下標
        for(int j=i+1; j<len; j++){
            if(arr[max] < arr[j])
                max = j; //認定最大值比遍歷出的數值還小
        }

        //不相等則交換元素
        if(max !=  i)
        swap_num(arr[max], arr[i]);
    }
}

//print
template<typename T>
void print_arr(T arr, int len){
    for(int i=0; i<len; i++)
        cout << arr[i] << " ";
    cout << endl;
}


void test01(){
    char arr1[]="adght";
    int len = sizeof(arr1) / sizeof(char) -1;
    // int len = strlen(arr1);
    select_sort(arr1, len);
    print_arr(arr1, len);
}

void test02(){
    int arr2[] = {7, 5, 1, 3, 9};
    int len = sizeof(arr2) / sizeof(int); //不需減1
    select_sort(arr2, len);
    print_arr(arr2, len);
}


int main(){
    test01();
    test02();
    return 0;
}