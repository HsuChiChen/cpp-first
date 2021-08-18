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
- [lec46-lec55](#lec46-lec55) 2021/08/05
- [lec56-lec65](#lec56-lec65) 2021/08/10
- [lec66-lec77](#lec66-lec77) 2021/08/11
- [lec78-lec89](#lec78-lec89) 2021/08/12
- [lec90-lec99](#lec90-lec99) 2021/08/13
- [lec100-lec103](#lec100-lec103) 2021/08/14
- [lec104-lec105](#lec104-lec105) 2021/08/15
- [lec106-lec108](#lec104-lec108) 2021/08/16
- [lec109-lec120](#lec109-lec120) 2021/08/18

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

4. `bool`類型只要**非0的值都代表真**

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

## lec46-lec55

1. 在定義二維數組時，如果初始化了數據，可以省略行數
2. 可讀性最高
```cpp
int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
```
3. 函數定義里小括號內稱為形參，函數調用時傳入的參數稱為實參

4. 值傳遞(函數調用時實參將數值傳入給形參)時，形參是修飾不了實參的

<br>

## lec56-lec70

1. 指針定義
- 指針定義語法: `int * p`

- `&`可獲取變量的地址

- 對指針變量解引用`*`，可以操作指針指向的內存

2. 所有指針類型在32位操作系統下是4個字節；64位操作系統下是8個字節

3. 空指針：指針變量指向內存中編號為0的空間`int * p = NULL`
- 用途：初始化指針變量
- 注意：空指針指向的內存是不可以訪問的

4. 野指針：指針變量指向非法的內存空間
- (X)`int * p = (int *)0x1100;`

5. 看`const`右側緊跟著的是指針還是常量, 是指針就是常量指針，是常量就是指針常量
```cpp
int a = 10;
int b = 10;

//const修飾的是指針，指針指向可以改，指針指向的值不可以更改
const int * p1 = &a; 
p1 = &b; //正確
//*p1 = 100;  報錯


//const修飾的是常量，指針指向不可以改，指針指向的值可以更改
int * const p2 = &a;
//p2 = &b; //錯誤
*p2 = 100; //正確

//const既修飾指針又修飾常量
const int * const p3 = &a;
//p3 = &b; //錯誤
//*p3 = 100; //錯誤
```

6. 指針`p +n`計算的是p加上n*類型占用字節數。假設指針p是int類型，本機中，使用`sizeof()`計算出的int占用的字節數是4。因此，p + 1其實就是p + 1 * 4個字節，p + 2其實就是p + 2 * 4個字節

7. 如果不想修改實參，就用值傳遞，如果想修改實參，就用地址傳遞

8. 結構體定義
- 變量利用操作符 `.` 訪問成員
- 定義結構體時的關鍵字是 `struct` 不可省略
創建結構體變量時，關鍵字 `struct` 可以省略

<br>

## lec66-lec77
1. 結構體指針可以通過 `->` 操作符 來訪問結構體中的成員
2. 在結構體中可以定義另一個結構體作為成員
3. 用指針傳地址(4 bytes)以減少大量傳值，造成內存浪費

```cpp
//學生結構體定義
struct student{
	//成員列表
	string name;  //姓名
	int age;      //年齡
	int score;    //分數
};

//const使用場景
void printStudent(const student *stu){ //加const防止函數體中的誤操作
	//stu->age = 100; //操作失敗，因為加了const修飾
	cout << "姓名：" << stu->name << " 年齡：" << stu->age << " 分數：" << stu->score << endl;

}
int main() {
	student stu = { "張三",18,100 };
	printStudent(&stu);
	system("pause");
	return 0;
}
```

<br>

## lec78-lec89
1. [內存四區](https://www.geeksforgeeks.org/memory-layout-of-c-program/)
![](https://media.geeksforgeeks.org/wp-content/uploads/memoryLayoutC.jpg)
- 代碼區(text segment) : 存放CPU執行的機器指令<br>
​  **共享** : 對於頻繁被執行的程序，只需要在內存中有一份代碼即可<br>
​ **唯讀** : 使其只讀的原因是防止程序意外地修改了它的指令

- 全局區(data segment) : 全局變量、靜態變量、常量區、字符串常量和其他常量也存放在此，該區域的數據在程序結束後由操作系統釋放

  - **data區**主要存放的是已經初始化的全局變量、靜態變量和常量

  - **bss區**主要存放的是未初始化的全局變量、靜態變量，這些未初始化的數據在程序執行前會自動被系統初始化為0或者`NULL`

  - **常量區**是全局區中劃分的一個小區域，里面存放的是常量，如const修飾的全局變量、字符串常量等

- 棧區(stack) : 主要存放**局部變量**、**局部常量**不要返回局部變量的地址，棧區開闢的數據由編譯器自動釋放

- 堆區(heap) : 由程序員分配釋放，若程序員不釋放，程序結束時由操作系統回收。用於動態內存分配。堆在內存中位於BSS區和棧區之間，在C++中主要利用`new`在堆區開闢內存

2. `new 數據類型`
```cpp
int* a = new int(10);
delete a;

//數組
int* arr = new int[10];
delete[] arr;
```
3. 引用 `數據類型 &别名 = 原名`
```cpp
int a = 10;
int &b = a;
```

<br>

## lec90-lec99
1. 引用必須初始化；在初始化後，不可以改變
```cpp
int a = 10;
int b = 20;
//int &c; //錯誤，引用必須初始化
int &c = a; //一旦初始化後，就不可以更改
c = b; //這是賦值操作，不是更改引用
```

2. 引用做函數參數使用讓形參修飾實，效果等同地址傳遞

3. 不要返回局部變量引用

4. 引用本質是指針常量，但是所有的指針操作編譯器都幫我們做了
```cpp
//發現是引用，轉換為 int* const ref = &a;
void func(int& ref){
	ref = 100; // ref是引用，轉換為*ref = 100
}
int main(){
	int a = 10;
    
    //自動轉換為 int* const ref = &a; 指針常量是指針指向不可改，也說明為什麽引用不可更改
	int& ref = a; 
	ref = 20; //內部發現ref是引用，自動幫我們轉換為:*ref = 20;
    
	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;
    
	func(a);
	return 0;
}
```

5. 在函數形參列表中，可以加const修飾形參，防止形參改變實參
```cpp
//引用使用的場景，通常用來修飾形參
void showValue(const int& v) {
	//v += 10;
	cout << v << endl;
}

int main() {
	//int& ref = 10;  引用本身需要一個合法的內存空間，因此這行錯誤
	//加入const就可以了，編譯器優化代碼，int temp = 10; const int& ref = temp;
	const int& ref = 10;

	//ref = 100;  //加入const後不可以修改變量
	cout << ref << endl;

	//函數中利用常量引用防止誤操作修改實參
	int a = 10;
	showValue(a);
	return 0;
}
```

6. 在C++中，函數的形參列表中的形參是可以有默認值的 `返回值類型 函數名 （參數= 默認值）{}`
```cpp
int func(int a, int b = 10, int c = 10) {
	return a + b + c;
}
//1. 如果某個位置參數有默認值，那麽從這個位置往後，從左向右，必須都要有默認值
//2. 如果函數聲明有默認值，函數實現的時候就不能有默認參數
int func2(int a = 10, int b = 10);
int func2(int a, int b) {
	return a + b;
}

int main() {
	cout << "ret = " << func(20, 20) << endl;
	cout << "ret = " << func(100) << endl;
	return 0;
}
```

7. 在C++中，函數的形參列表里可以有占位參數，用來做占位，調用函數時必須填補該位置`返回值類型 函數名 (數據類型){}`
```cpp
//函數占位參數 ，占位參數也可以有默認參數
void func(int a, int) {
	cout << "this is func" << endl;
}
int main() {
	func(10,10); //占位參數必須填補
	return 0;
}
```

8. 函數名可以相同，提高覆用性
- 同一個作用域下
- 函數名稱相同
- 函數**參數類型**、**個數**或者**順序**不同
- 函數的返回值不可以作為函數重載的條件

```cpp
//1、引用作為重載條件
void func(int &a){
	cout << "func (int &a) 調用 " << endl;
}

void func(const int &a){
	cout << "func (const int &a) 調用 " << endl;
}

//2、函數重載碰到函數默認參數
void func2(int a, int b = 10){
	cout << "func2(int a, int b = 10) 調用" << endl;
}

void func2(int a){
	cout << "func2(int a) 調用" << endl;
}

int main() {
	int a = 10;
	func(a); //調用無const
	func(10);//調用有const
	//func2(10); //碰到默認參數產生歧義，需要避免
	return 0;
}
```

<br>

# lec100-lec103
1. C++面向對象的三大特性為：**封裝**、**繼承**、**多態**

- 語法`class 類名{ 訪問權限： 屬性 / 行為 };`

2. 封裝的意義 
- 將屬性和行為作為一個整體，表現生活中的事物
- 類在設計時，可以把屬性和行為放在不同的權限下，加以控制
  - `public` 公共權限 類內可訪 類外可訪
  - `protected` 保護權限 類內可訪 類外不可訪
  - `private` 私有權限 類內可訪 類外不可訪

3. 在C++中 `struct`和`class`唯一的區別就在於 默認的**訪問權限**不同
- `struct` 默認權限為公共
- `class` 默認權限為私有

4. 成員屬性設置為私有
- 將所有成員屬性設置為私有，可以自己**公共接口**控制讀寫權限，可設置為唯讀/可讀可寫/唯寫
- 對於寫權限，我們可以檢測數據的有效性

<br>

## lec104-lec105
- hw16
- hw17

<br>

## lec106-lec108
1. 對象的初始化和清理工作是編譯器強制要我們做的事情，因此如果我們不提供構造和析構，編譯器會提供**空實現**的構造函數和析構函數

- 構造函數 語法: `類名(){}`
	1. 沒有返回值也不寫`void`
	2. 函數名稱與類名相同
	3. 構造函數可以有參數，因此可以發生**重載**
	4. 程序在調用對象時候會自動調用構造，無須手動調用,而且只會調用一次

- 析構函數 語法: `~類名(){}`
	1. 析構函數，沒有返回值也不寫`void`
	2. 函數名稱與類名相同,在名稱前加上符號`~`
	3. 析構函數不可以有參數，因此不可以發生重載
	4. 程序在對象銷毀前會自動調用析構，無須手動調用,而且只會調用一次

2. 構造函數的調用 
	1. 括號法，常用
    ```cpp
	Person p1(10);
	```
	2. 顯式法
	```cpp
	Person p2 = Person(10); 
	Person p3 = Person(p2);
	Person(10) 
	//單獨寫就是匿名對象pure RValue  
	//生命周期為整個函數周期，當前行結束之後，馬上析構
	//因此匿名對象需要一個對象去接
	```

	3. 隱式轉換法
	```cpp
	Person p4 = 10; // Person p4 = Person(10); 
	Person p5 = p4; // Person p5 = Person(p4); 
	```

<br>

## lec109-lec120
1. 拷貝構造函數調用時機
- 使用一個已經創建完畢的對象來初始化一個新對象
```cpp
Person man(100); //p對象已經創建完畢
Person newman(man); //調用拷貝構造函數
```
- 值傳遞的方式給函數參數傳值
```cpp
void do_work(person p){}
void test02(){
    person p;
    do_work(p);
}
```

2. 默認情況下，C++編譯器至少給一個類添加3個函數
- 默認構造函數(無參，函數體為空)
- 默認析構函數(無參，函數體為空)
- 默認拷貝構造函數，對屬性進行值拷貝

3. 構造函數調用規則如下：
- 定義有參構造函數，不再提供默認無參構造，但是會提供默認拷貝構造，並且做淺拷貝操作
- 定義拷貝構造函數，c++不會再提供其他構造函數

4. 如果屬性有在堆區開辟的，一定要**自己提供拷貝構造函數**，防止淺拷貝帶來的問題。
- 淺拷貝 : 簡單的賦值拷貝操作
- 深拷貝 : 在堆區重新申請空間，進行拷貝操作

