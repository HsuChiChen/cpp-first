# My First C++ Program
Time : 2021 summer

## lecture
1. It's available  on [Bilibili(黑马程序员匠心之作|C++教程从0到1入门编程)](https://www.bilibili.com/video/BV1et411b73Z)

<br>

![Bilibili Playlist](https://i.pinimg.com/564x/46/d6/0a/46d60aa03500498f333664e2fb339b23.jpg)

2. lecture note available  on CSDN
- [基礎](https://blog.csdn.net/ClaireSy/article/details/108422945)
- [核心](https://blog.csdn.net/ClaireSy/article/details/108423047)
- [提高](https://blog.csdn.net/ClaireSy/article/details/108423061) 

<br>

## Study Progress
- [lec01-lec11](#lec01-lec11) 2021/08/02
- [lec12-lec28](#lec12-lec28) 2021/08/03
- [lec29-lec45](#lec29-lec45) 2021/08/04
- [lec46-lec71](#lec46-lec71) 2021/08/05


<br>

## Environment
1. OS
- `Ubuntu v20.04`
- `Windows Subsystem for Linux version 2`
2. Compiler
- `g++ (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0`

<br>

## How to Run
1. download repo
```
git clone https://github.com/HsuChiChen/cpp-first.git
```
2. choose which source code you want to run
```
make hw+{index}
```

> For instance, if you want to run hw01.cpp
```
make hw01
```
3. Clean all the output file being compiled
```
make clean
```

<br>

## lec01-lec11
1. 註解 

|單行註解|多行註解|
|:-:|:-:|
|`//hello`|`/*hello*/`|

2. `main`是一個程序的入口，每個程序都必須有這麼一個函數，有且僅有一個

3. 變量存在的意義 : 方便我們管理內存空間 `數據類型 變量名 = 初始值`

4. 常量

|宏常量|`const` 修飾變量|
|:-:|:-:|
|`#define day 7`|`const int day = 7`|

5. 標示符規則
- 標示符不可以是**關鍵字**

|     asm    |      do      |        if        |    return   |  typedef |
|------------|--------------|------------------|-------------|----------|
|    auto    |    double    |      inline      |    short    |  typeid  |
|    bool    | dynamic_cast |        int       |    signed   | typename |
|    break   |     else     |       long       |    sizeof   |   union  |
|    case    |     enum     |      mutable     |    static   | unsigned |
|    catch   |   explicit   |     namespace    | static_cast |   using  |
|    char    |    export    |        new       |    struct   |  virtual |
|    class   |    extern    |     operator     |    switch   |   void   |
|    const   |     false    |      private     |   template  | volatile |
| const_cast |     float    |     protected    |     this    |  wchar_t |
|  continue  |      for     |      public      |    throw    |   while  |
|   default  |    friend    |     register     |     true    |          |
|   delete   |     goto     | reinterpret_cast |     try     |          |

- 由字母、數字、下滑線構成 `int _abc = 10;`(O)
- 標示符第1個字符只能是字母或下滑線
`int 012abc = 10` (X)
- 標示符區分大小寫
- 變量起名要見名知意

6. 整型數據類型

|數據類型|占用空間(byte)|值範圍|
|:-:|:-:|:-:|
|`short`(短整型)|2| (-2^15 ~ 2^15-1) |
|`int`(整型)|4| (-2^31 ~ 2^31-1) |
|`long`(長整形)|Windows=4，Linux=4(32位)，=8(64位) | (-2^31 ~ 2^31-1) |
|`long long`(長長整形)|8|(-2^63 ~ 2^63-1) |

7. 用`sizeof(數據類型/變量)`求出佔用內存大小

8. 浮點型

|數據類型|占用空間(byte)|值範圍|
|:-:|:-:|:-:|
|float|4|7位有效數字|
|double|8|15～16位有效數字|

- 需要寫`float f1 = 3.14f`，如果沒加`f`的話小數點默認是`double`型態，因此系統還需要多做一步才會轉換為`float`型態，造成系統不必要的計算。

- 默認情況下，輸出一個小數會顯示6位有效位數

- 可以用科學記號代表小數`float f2 = 3e-2`

9. 字符占1位元組 `char a = 'a'`
- 透過`(int)a`強轉字符型為對應的ASCII編碼`A-65 a-97`

<br>

## lec12-lec28
1. 轉義字符

|轉義字符|含義|ASCII碼值(十進位)|
|:-:|:-:|:-:|
|`\a`|警報|007|
|`\b`|退格(BS) ，將當前位置移到前一列|008|
|`\f`|換頁(FF)，將當前位置移到下頁開頭|012|
|`\n`| 換行(LF) ，將當前位置移到下一行開頭 |010|
|`\r`|回車(CR) ，將當前位置移到本行開頭|013|
|`\t`|水平制表(HT) （跳到下一個TAB位置） |009|
|`\v`|垂直制表(VT)|011|
|`\\`|代表一個反斜線字符""|092|
|`’`|代表一個單引號（撇號）字符|039|
|`"`|代表一個雙引號字符|034|
|`?`|代表一個問號|063|
|`\0`|數字0|000|
|`\ddd`|8進制轉義字符，d範圍0~7|3位8進制|
|`\xhh`|16進制轉義字符，h範圍09，af，A~F|3位16進制|


2. 字符串
- C風格 `char str1[] = "hello world";`
- C++風格 `string str = "hello world";`須包含頭文件`#include<string>`

3. `bool` true=1, false=0，占用一個byte

4. `bool`類型只要非0的值都代表真

5. 兩數相除`/` 整數依然是整數；小數除不盡還是小數

6. 
|述語|示例|結果|
|:-:|:-:|:-:|
|前置遞增|`a=2; b=++a;`|`a=3; b=3;`|
|后置遞增|`a=2; b=a++;`|`a=3; b=2;`|

<br>

## lec29-lec45
1. C++中三目運算符返回的是變量,可以繼續賦值
```cpp
int a = 10;
int b = 20;
int c = 0;
c = a > b ? a : b;     //c=b(=20)
(a > b ? a : b) = 100; //b=100
```

2. `switch`
- `switch`語句中表達式類型只能是**整型**或者**字符型**

- `case`裡如果沒有`break`，那么程序會一直向下執行

- 與`if`語句比，對於多條件判斷時，switch的結構清晰，執行效率高，缺點是switch不可以判斷區間

3.生成隨機變數
```cpp
#include <iostream>
#include <ctime>
using namespace std;
int main(){
    // Always set a seed value.
    srand((unsigned int)time(NULL)); 
    //取時間種子，沒寫則會預設種子srand(1)，每次都會生成相同的序列
    int RandomValue = rand() % 100;
    cout << "The random month number is: " << RandomValue + 1 << endl;
    return 0;
}
```

4. `do{循環語句} while(循環條件);`會先執行一次循環語句，再判斷循環條件

5. `for(起始表達式;條件表達式;末尾循環體) { 循環語句; }` 前面三3者任意1個可省略，`for`循環中的表達式，要用分號進行分隔

6. `continue`在循環語句中，跳過本次循環中剩下尚未執行的語句，繼續執行下一次循環。`continue`並沒有使整個循環終止，而`break`會跳出循環

7. 不建議使用`goto`
```cpp
cout << "1.XXXX" << endl;
goto FLAG;
cout << "2.XXXX" << endl;
FLAG:
cout << "3.XXXX" << endl;
```

8. 數組是由連續的內存位置組成的，每個數據元素都是相同的數據類型

9. 數組名用途
```cpp
//1、可以獲取整個數組占用內存空間大小
int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

cout << "整個數組所占內存空間為： " << sizeof(arr) << endl;
cout << "每個元素所占內存空間為： " << sizeof(arr[0]) << endl;
cout << "數組的元素個數為： " << sizeof(arr) / sizeof(arr[0]) << endl;

//2、可以通過數組名獲取到數組首地址
cout << "數組首地址為： " << (long)arr << endl;
cout << "數組中第一個元素地址為： " << (long)&arr[0] << endl;
cout << "數組中第二個元素地址為： " << (long)&arr[1] << endl;
//arr = 100; 錯誤，數組名是常量，因此不可以賦值
```
- 每次程式運行時，內存地址是操作系統隨機分配，因此可能會變

<br>

## lec46-lec71