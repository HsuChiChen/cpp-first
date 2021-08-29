//C-風格進行讀檔
//讀取`"{70, 12, 20, 50}"`，並儲存為整數數列
#include <iostream>
#include <cstring>

int main()
{
    char work[] = "{70, 12, 20, 50}";
    char *work2 = new char[strlen(work)];
    strcpy(work2, work); //避免更改到原本的字符數組，因此進行複製
    int arr[10];
    int i = 0;

    char *tok = strtok(work2, "{}, "); //delimiters 中的各個字元為"或"的關係
    while (tok != NULL)
    {                               //NULL = /0(結束的控制字元)
        arr[i++] = atoi(tok);       //將字符數組轉換為int
        tok = strtok(NULL, "{}, "); //剩下的字符數組要使用NULL讀取
    }

    delete work2; //釋放heap空間，以免mem leak

    for (int j = 0; j < i; j++)
    { //印出測試
        std::cout << arr[j] << std::endl;
    }
    return 0;
}