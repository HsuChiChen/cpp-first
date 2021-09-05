//自己通用的數組類
#include <iostream>
using namespace std;

template<typename T>
class arr{
public:
    //有參構造函數
    arr(int capacity){
        //cout << "有參構造函數調用" << endl;
        this->capacity = capacity;
        this->size = 0;
        this->ptr = new T[this->capacity];
    }

    //拷貝構造函數
    arr(const arr &arr){
        //cout << "拷貝構造函數調用" << endl;
        //編譯器默認淺拷貝
        this->capacity = arr.capacity;
        this->size = arr.size;
        // this->ptr = arr.ptr;

        //深拷貝解決
        this->ptr = new T[arr.capacity];
        //將arr中的數據都拷貝過來
        for(int i=0; i<this->size; i++){
            this->ptr[i] = arr.ptr[i]; 
        }
    }

    //operator= 函數重載 防止淺拷貝問題 
    //須返回arr&，等號做賦值(=)傳遞時要返回自身的引用，才可以做連續等於的操作(a = b = c)
    arr& operator=(const arr &arr){
        //cout << "operator=函數重載調用" << endl;
        //先判斷原有堆區是否有數據，如果有要先釋放(ex:容量20拷貝到容量10)
        if(this->ptr != NULL){
            delete [] this->ptr;
            this->ptr = NULL;
            this->capacity = 0;
            this->size = 0;
        }

        //深拷貝
        this->capacity = arr.capacity;
        this->size = arr.size;
        this->ptr = new T[arr.capacity];
        //將arr中的數據都拷貝過來
        for(int i=0; i<this->size; i++){
            this->ptr[i] = arr.ptr[i]; 
        }

        return *this; //this指針去做解引用，把自身透過引用返回到原函數
    }

    //尾插法
    void push_back(const T &val){
        //判斷容量是否等於大小
        if(this->capacity == this->size)
            return;
        this->ptr[this->size] = val; //在數組末尾插入數據
        this->size++; //更新數組大小
    }

    //尾刪法
    void pop_back(){
        //讓用戶訪問不到最後一個元素，即為尾刪，邏輯刪除
        if(this->size == 0)
            return;
        this->size--;
    }

    //通過下標方式訪問數組中的元素
    //方法重載中括號[]
    T& operator[](int index){ //不以引用返回，相當於又創建了一個對象，而更改的是新對象的值(ex:arr[0] = 100)
        return this->ptr[index];
    }

    //返回數組的容量
    int get_capacity(){
        return this->capacity;
    }

    //返回數組的大小
    int get_size(){
        return this->size;
    }

    //析構函數
    ~arr(){
        //cout << "析構函數調用" << endl;
        if(this->ptr != NULL){
            delete [] this->ptr;
            this->ptr = NULL;
        }
    }
private:
    T *ptr = NULL; //指針指向堆區開闢的真實數組
    int capacity;  //數組容量
    int size;     //數組大小
};