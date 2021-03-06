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
- [lec001-lec011](#lec001-lec011) 2021/08/02
- [lec012-lec028](#lec012-lec028) 2021/08/03
- [lec029-lec045](#lec029-lec045) 2021/08/04
- [lec046-lec055](#lec046-lec055) 2021/08/05
- [lec056-lec065](#lec056-lec065) 2021/08/10
- [lec066-lec077](#lec066-lec077) 2021/08/11
- [lec078-lec089](#lec078-lec089) 2021/08/12
- [lec090-lec099](#lec090-lec099) 2021/08/13
- [lec100-lec103](#lec100-lec103) 2021/08/14
- [lec104-lec105](#lec104-lec105) 2021/08/15
- [lec106-lec108](#lec104-lec108) 2021/08/16
- [lec109-lec114](#lec109-lec114) 2021/08/18
- [lec115-lec120](#lec115-lec120) 2021/08/19
- [lec121-lec131](#lec121-lec131) 2021/08/21
- [lec132-lec142](#lec132-lec142) 2021/08/26
- [lec143-lec149](#lec143-lec149) 2021/08/28
- [c-style-string](#c-style-string) 2021/08/29
- [lec150-lec158](#lec150-lec158) 2021/08/31
- [lec159-lec169](#lec159-lec169) 2021/09/03
- [lec170-lec180](#lec170-lec180) 2021/09/04
- [lec181-lec187](#lec181-lec187) 2021/09/05
- [lec188-lec192](#lec188-lec192) 2021/09/06
- [lec193-lec204](#lec193-lec204) 2021/09/07
- [lec205-lec210](#lec205-lec210) 2021/09/17
- [lec211-lec222](#lec211-lec222) 2021/09/18
- [lec223-lec230](#lec223-lec230) 2021/09/22
- [lec231-lec250](#lec231-lec250) 2021/09/23
- [lec237-lec263](#lec237-lec263) 2021/09/24

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

## lec001-lec011
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

## lec012-lec028
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
- 初始化
	1. 通過字符串初始化
	```cpp
	string s1 = "hello world!";
	```
	2. 通過複製另外一個字符串完成初始化
	```cpp
	string s3 = s2;
	```
	3. 通過構造函數初始化
	```cpp
	string s2("hello world!");
	```
	4. 通過某些字符初始化
	```cpp
	string s4(10,'0'); //長度為10，均為0的數組
	```

3. `bool` true=1, false=0，占用一個byte

4. `bool`類型只要**非0的值都代表真**

5. 兩數相除`/` 整數依然是整數；小數除不盡還是小數

6. 
|述語|示例|結果|
|:-:|:-:|:-:|
|前置遞增|`a=2; b=++a;`|`a=3; b=3;`|
|后置遞增|`a=2; b=a++;`|`a=3; b=2;`|

<br>

## lec029-lec045
- hw01
- hw02
- hw03

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

## lec046-lec055
- hw04
- hw05
- hw06

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

## lec056-lec065
- hw07
- hw08
- hw10

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

## lec066-lec077
- hw12

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

## lec078-lec089
- hw13

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

## lec090-lec099
- hw14

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
- hw15

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
- hw18
- hw19
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

## lec109-lec114
- hw20
- hw21
- hw22

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
- 定義有參構造函數，**不再提供默認無參構造**，但是會提供默認拷貝構造，並且做淺拷貝操作
- 定義拷貝構造函數，c++不會再提供其他構造函數

4. 如果屬性有在堆區開辟的，一定要**自己提供拷貝構造函數**，防止淺拷貝帶來的問題。
- 淺拷貝 : 簡單的賦值拷貝操作，默認的拷貝構造函數實現
- 深拷貝 : 在heap重新申請空間，進行拷貝操作

5. 初始化列表
```cpp
person(int a, int b, int c):m_a(a), m_b(b), m_c(c){}
```

6. C++類中的成員可以是另一個類的對象，我們稱該成員為**對象成員**，B類中有對象A作為成員，A為對象成員。構造的順序是先**調用對象成員的構造**，再調用本類構造；析構順序與構造則相反。
```cpp
class A {}
class B{
    A a；
}
```

7. 靜態成員
- 靜態成員變量
	1. 所有對象共享同一份數據
	2. 在編譯階段分配內存(review:數據存在記憶體的data segment)
	3. 類內聲明，類外初始化`int person::m_a = 0;`
- 靜態成員函數
	1. 所有對象共享同一個函數
	2. 靜態成員函數只能訪問靜態成員變量，因為這個數據屬於特定的對象，無法區分到底是哪一個對象的
- 共同點
	1. 通過對象訪問
    ```cpp
	person p;
    p.fun();
	```
	2. 通過類名訪問
    ```cpp
	person::fun();
	```
	3. 也是有訪問權限的，像是類外訪問不到私有的靜態函數

8. 成員變量和成員函數分開存儲，只有非靜態成員變量才屬於類的對象上。不占對象空間代表在這個類所有對象都共用一份數據。另外編譯器會給每個空對象分配**1個字節空間**，是為了區分空對象占內存的位置。
```cpp
class Person{
public:
	Person(){
		mA = 0;
	}
	//非靜態成員變量占對象空間
	int mA;
	//靜態成員變量不占對象空間
	static int mB; 
	//函數也不占對象空間，所有函數共享一個函數實例
	//因此會透過this指針去區分現在指到的對象
	void func() {
		cout << "mA:" << this->mA << endl;
	}
	//靜態成員函數也不占對象空間
	static void func() {
	}
};
```

<br>

## lec115-lec120
- hw23
- hw24
- hw25
- hw26
- hw27

1. this指針<br>
`C++`通過提供特殊的對象指針 : **this指針**，解決多個同類型的對象會共用非靜態成員函數。**this指針指向被調用的成員函數所屬的對象**
- 不需要定義，直接使用即可
- 用途：
	1. 當形參和成員變量同名時，可用this指針來區分
	2. 在類的非靜態成員函數中返回對象本身，可使用`return *this`

2. C++中空指針空指針`NULL`也是可以調用成員函數的，但是也要注意有沒有用到`this`指針。

3. 	
	- 常函數
		- 成員函數後加const後我們稱為這個函數為**常函數**
		- 常函數內不可以修改成員屬性
		- 成員屬性聲明時加關鍵字`mutable`後，在常函數中依然可以修改
	- 常對象
		- 聲明對象前加`const`稱該對象為常對象
		- 常對象只能調用常函數與修改`mutable`成員變數

4. 友元(`friend`)
	- 目的:就是讓一個函數或者類 訪問另一個類中私有成員
	1. 全局函數
	```cpp
	class building{
    friend void dude(building *building);
	public:  
	...
	```

	2. 類
	```cpp
	friend class dude;
	```
	3. 成員函數
	```cpp
	//dude類中的visit成員函數 是Building好朋友，可以訪問私有內容
	friend void dude::visit();
	```

<br>

## lec121-lec131
- hw28
- hw29
- hw30
- hw31
- hw32
- hw33

1. 運算符重載<br>
對已有的運算符重新進行定義，賦予其另一種功能，以適應不同的數據類型

- 相加`+`
```cpp
person operator+(person &p1, person &p2){
    person temp;
    temp.m_A = p1.m_A + p2.m_A;
    temp.m_B = p1.m_B + p2.m_B;
    return temp;
}
```

- 左移`<<` <br>
配合友元可以實現輸出自定義數據類型
需讓函數去能調用`private`變數。
```cpp
friend ostream& operator<<(ostream& out, Person& p);
```
```cpp
ostream& operator<<(ostream& out, Person& p) {
	out << "a:" << p.m_A << " b:" << p.m_B;
	return out;
}
```

- 遞增`++`<br>
前置遞增返回引用，後置遞增返回值，這也是為什麼`a++++`不行，但`++++a`可以編譯
	1. 前置
	```cpp
	//重載前置++運算符 返回引用為了一直對一個數據進行遞增操作
		integer& operator++(){
			//先進行++運算
			m_num++;
			//再將自身返回
			return *this;
		}
	```
	2. 後置
	```cpp
	//重載後置++運算符
    integer operator++(int){ //int(必須要用int)代表佔位參數，可以用於區分前置和後置遞增
        //先 紀錄當時結果
        integer temp = *this;
        //後 遞增
        m_num++;
        //最後將記錄結果做返回
        return temp; //局部對象temp在當前函數執行完就會被釋放
        //所以如果後面還要返回引用就是非法操作，因此後置遞增要返回**值**
    }
	```

- 賦值`=`<br>
`C++`編譯器至少給一個類添加4個函數
1. 默認構造函數(無參，函數體為空)
2. 默認析構函數(無參，函數體為空)
3. 默認拷貝構造函數，對屬性進行值拷貝
4. 賦值運算符 operator=, 對屬性進行值拷貝

如果類中有屬性指向堆區，做賦值操作時也會出現深淺拷貝問題
```cpp
Person& operator=(Person &p){
		if(m_Age != NULL){
			delete m_Age;
			m_Age = NULL;
		}
		//編譯器提供的代碼是淺拷貝
		//m_Age = p.m_Age;

		//提供深拷貝 解決淺拷貝的問題
		m_Age = new int(*p.m_Age);

		//返回自身 //p3 = p2 = p1;
		return *this;
	}
```
- 關係`>`, `<`
- 函數調用運算符`()`
由於重載後使用的方式非常像函數的調用，因此稱為**仿函數**非常靈活，沒有固定的寫法。

2. **繼承** : 從子類繼承父類表現其共性，而新增的成員體現了其個性。`class 子類 : 繼承方式  父類`

3. 繼承方式共有3種
![](img/inheritance_type.png)

4. 由`sizeof()`可查看，父類中所有非靜態成員屬性都會被子類繼承下去，只是編譯器把私有成員給隱藏後訪問不到。

5. 繼承中，先調用父類構造函數，再調用子類構造函數，析構順序與構造相反。


6. 繼承同名成員處理方式
	1. 子類對象可以直接訪問到子類中同名成員
	2. 子類對象加**作用域**可以訪問到父類同名成員
	3. 當子類與父類擁有同名的成員函數，**子類會隱藏父類中同名成員函數**，加作用域可以訪問到父類中同名函數

<br>

## lec132-lec142
- hw34
- hw35
- hw36
- hw37
- hw38

1. 同名靜態成員處理方式和非靜態處理方式一樣，只不過有兩種訪問的方式(對象、類名)
```cpp
son::base::m_A //第1種:通過類名；第二種:訪問父類作用域
```

2. C++允許一個類繼承多個類，`class 子類 ：繼承方式 父類1, 繼承方式 父類2...`，多繼承可能會引發父類中有同名成員出現，需要加作用域區分。實際開發中**不建議**用多繼承。

3. 菱形繼承<br>
- 問題 : 子類**繼承兩份相同**的數據，導致資源浪費以及毫無意義，可利用**虛繼承**解決，語法:`virtual public animal`

- 內部實現 : 其實虛繼承只是繼承指針`vbptr(virtual base pointer)`，而這指針指向`vbtable`，`vbtable`紀錄的是偏移量，加上偏移量就可以找到唯一的數據，所以這份數據只會有一個。

4. 多態種類

|項目|靜態多態|動態多態|
|:-:|:-:|:-:|
|解釋|函數重載和運算符重載，覆用函數名|派生類和虛函數實現|
|函數地址|綁定-編譯階段確定|地址晚綁定-運行階段確定|

5. 多態原理
由於我們在父類寫了虛函數`virtual`，在類內部結構發生了改變，多了一個虛函數指針`vfptr`(由`sizeof`在64位元下佔8bytes)，指向虛函數表，虛函數內部寫的是虛函數入口地址`&animal::speak`。<br><br>
當子類重寫(重寫:函數返回值類型 、函數名、參數列表完全一致)由父類繼承過來的虛函數表，會替換成子類虛函數地址`&cat::speak`。<br>
因此當**父類的指針或引用指向子類的對象**時，而是是運行的時候，動態的根據 base 指向的對象，找到這個對象的 vptr 指針，然後找到這個對象的虛函數表，最後調用虛函數表里對應的函數，發生多態。
```cpp
animal &animal = cat;
animal speak;
```

5. 多態好處
- 組織結構清晰
- 可讀性強
- 對前期和後期擴展以及維護性高
- 符合設計模式 - **開閉原則**(對擴展進行開放，對修改進行關閉)

6. 在多態中，通常父類中虛函數的實現是毫無意義的，主要都是調用子類重寫的內容，因此可以將虛函數改為**純虛函數**
```cpp
virtual 返回值類型 函數名 （參數列表）= 0 ;
```
- 當類中有了純虛函數，這個類也稱為**抽象類**
	1. **無法實例化**對象
	2. 子類必須重寫抽象類中的純虛函數，否則也屬於抽象類

7. 虛析構
- 問題: 多態使用時，如果子類中有屬性開辟到堆區，那麽父類指針在釋放時無法調用到子類的析構代碼
- 解決方式: 將父類中的析構函數改為**虛析構**或者**純虛析構**
- 注意事項
	1. 如果子類中沒有堆區數據，可以不寫為虛析構或純虛析構
	2. 擁有純虛析構函數的類也屬於抽象類
虛析構語法
```cpp
virtual ~類名(){}
```
純虛析構語法
```cpp
virtual ~類名() = 0;
```
```cpp
類名::~類名(){}
```

<br>

## lec143-lec149
- hw39
- hw40
- hw41
- hw42
- hw43

1. 寫文件
	1. 包含頭文件   
	```cpp
	#include <fstream>
	```
	2. 創建流對象  
	```cpp
	ofstream ofs; //or fstream ofs;
	```
	3. 打開文件
	```cpp
	ofs.open("path/file",way to open);
	```
	4. 寫數據
	```cpp
	ofs << "data";
	```
	5. 關閉文件
	```cpp
	ofs.close();
	```
2. 打開方式

| 打開方式    | 解釋                       |
| ----------- | -------------------------- |
| ios::in     | 為讀文件而打開文件         |
| ios::out    | 為寫文件而打開文件         |
| ios::ate    | 初始位置：文件尾           |
| ios::app    | 追加方式寫文件             |
| ios::trunc  | 如果文件存在先刪除，再創建 |
| ios::binary | 二進制方式                 |

2. 讀文件
```cpp
//第一種方式
char buf[1024] = {0};
while (ifs >> buf){
	cout << buf << endl;
}

//第二種
char buf[1024] = {0};
while (ifs.getline(buf,sizeof(buf))){
	cout << buf << endl;
}

//第三種
string buf;
while (getline(ifs, buf)){
	cout << buf << endl;
}
//第四種
char c;
while ((c = ifs.get()) != EOF){
	cout << c;
}
```

3. 二進制寫文件
```cpp
//1、包含頭文件

//2、創建輸出流對象
ofstream ofs("person.txt", ios::out | ios::binary); //可2.3合併有構造函數

//3、打開文件
//ofs.open("person.txt", ios::out | ios::binary);

Person p = {"張三"  , 18};

//4、寫文件
ofs.write((const char *)&p, sizeof(p)); // (字符指針指向內存中一段存儲空間,讀寫的字節數)
```


<br>

## c-style-string
- hw43

參考[中文教學](https://www.youtube.com/channel/UC9Jk6B_ROKowxzXoQAuR6tA)、[cplusplus網站](https://www.cplusplus.com/reference/cstring/)、[programiz](https://www.programiz.com/c-programming/library-function/string.h/strcat)，
注意此部分於`C++`的標頭檔`string`(屬於OOP中的class)不同。`C`語言使用`string.h`；`C++`沿用`C`使用`cstring`。

### size_t (資料型態)<br>
Unsigned integral type，32位元4bytes；64位元8bytes

<br>

### NULL<br>
等於`\0`，而\是跳脫字元(脫離原字元的意思)

<br>

### strlen (長度)
`size_t strlen( const char *str );` 傳入一個字串 str，回傳這個字串的長度，而 '\0' 不計入長度（但 '\n' 計入）。其中的回傳值型態 size_t 通常是無號整數型別。

<br>

### strcpy (複製)
```cpp
char * strcpy ( char * destination, const char * source );
```
1. 功能: 將 source 的值複製給 destination。不能用`=`指派字串，要用`strcpy`。
2. 型態: `const char * source`不代表一定要指派`const`，而是告訴使用者，所指派的值不會被變動。
等同於:
```cpp
const char *sou1 = new char[11];
const char *sou2 = sou1;
```
3. 範例
```cpp
char *str1 = "C programming";
char str2[20];
strcpy(str2, str1);
```
4. 範例2<br>
由於`des`儲存的是第一個位置，因此當想替換字串
`Hi, I am Mary` -> `Hi, I am John`
```cpp
char *ch = new char[21];
strcpy(ch, "Hi, I am Mary");
char newname[] = "John";
strcpy(ch + strlen(ch) - strlen(newname), newname);
std::cout << ch << std::endl;
```

<br>

### strcat (串接)
1. 功能: 將 source 的內容，串接在 destination 原先內容的後面。
2. 型態: `char * strcat ( char * destination, const char * source );`
3. 範例:
```cpp
char word[1000] = "1234";
strcat(word, "567");
std::cout << word << std::endl;
```

<br>

### strcmp (比較)
1. 功能: 從第一個字元開始逐一比對 str1 與 str2 的所有字元。比對過程若有不一樣的字元時：

|ASCII比對|結果|
|:-:|:-:|
|str1 > str2|正值|
|str1 < str2|負值|
|str1 == str2|0|
2. 型態: `int strcmp ( const char * str1, const char * str2 );`
3. 範例:
```cpp
char word1[] = "abcd";
char word2[] = "Abcd";
int i = strcmp(word1, word2);
```

<br>

### strstr (尋找)
1. 功能: 運算出 str2 在 str1 中第一次出現的位置。若不存在結果為 NULL。
2. 型態: `const char * strstr ( const char * str1, const char * str2 );`
3. 範例:
```cpp
char word1[] = "33551saber";
char *pc = strstr(word1, "551");
std::cout << pc << std::endl;
//輸出是551saber，因為字串取值會取到空字元
```

### strtok (切割)
1. 功能: 依照 delimiters 的內容切割 str。delimiters 中的各個字元為或的關係。str 的內容會被改變。
2. 型態: `char * strtok ( char * str, const char * delimiters );`
3. 範例:
```cpp
char work[] = "abc,def,ghi.hfd";
char *tok = strtok(work, ",."); //"或"的關係
while(tok != NULL){ //NULL = /0(結束的控制字元)
    tok = strtok(NULL, ",."); //剩下的字符數組要使用NULL讀取
}
```

<br>

## lec150-lec158
- proj1

<br>

## lec159-lec169
- proj1
1. 泛型編程<br>
在**強型別程式語言**中編寫代碼時使用一些以後才指定的類型，在實例化時作為參數指明這些類型，即參數化類型。

2. 語法
- 函數聲明或定義
```cpp
template<typename T> //<class T>  //T通用的數據類型，名稱可以替換
```
- 調用
```cpp
//1、自動類型推導
mySwap(a, b);

//2、顯示指定類型
mySwap<int>(a, b);
```

3. 注意事項
- 自動類型推導，必須推導出一致的數據類型`T`,才可以使用
- 模板必須要確定出`T`的數據類型，才可以使用

<br>

## lec170-lec180
- hw44
- hw45
- hw46
- hw47
- hw48

1. 建議使用**顯示指定類型**方式調用函數模板，因為可以自己確定通用類型T
```cpp
int a = 10;
int b = 20;
char c = 'c'; //將char類型的'c'隱式轉換為int類型，'c'對應ASCII碼99

//1. 報錯，使用自動類型推導時，不會發生隱式類型轉換
//myAdd02(a, c); 

//2. 正確，如果用顯示指定類型，可以發生隱式類型轉換
myAdd02<int>(a, c);
```

2. 普通函數與函數模板的調用規則
	- 如果函數模板和普通函數都可以實現，優先調用普通函數
	- 可以通過空模板參數列表來強制調用函數模板` print<>(a)`
	- 函數模板也可以發生重載
	- 如果函數模板可以產生更好的匹配，優先調用函數模板
	- 既然提供了函数模板，最好就不要提供普通函数

3. 利用**具體化的模板**，可以解決自定義類型的通用化
```cpp
//具體化優先於常規模板，以template<>開頭，並通過名稱來指出類型
template<> bool myCompare(Person &p1, Person &p2){}
```

4. 類模板與函數模板區別有2點
	- 類模板沒有自動類型推導的使用方式，只能用**顯示指定類型**的方式
	- 類模板在模板參數列表中可以有**默認參數**

5. 類模板中的成員函數並不是一開始就創建的，在調用時才去創建

6. 通過類模板創建的對象，可以有三種方式向函數中進行傳參
	- 指定傳入的類型(常用):直接顯示對象的數據類型
	- 參數模板化:將對象中的參數變為模板進行傳遞
	- 整個類模板化:將這個對象類型 模板化進行傳遞

7. 如果父類是類模板，子類需要指定出父類中T的數據類型
```cpp
template<class T>
class base{
    T m;
};
////類模板繼承類模板 ,可以用T2指定父類中的T類型
template<typename T1, typename T2>
class son :public base<T2>{
    T1 obj;
};

void test01(){
    son<int, char>son01;
}
```

8. 類模板中成員函數類外實現時，需要加上模板參數列表
```cpp
template<typename T1, typename T2>
void person<T1, T2>::show(){
    cout << "姓名: " << this->name << " 年齡: " << this->age << endl;
}
```

9. 分文件編寫
	- 問題
	類模板中成員函數創建時機是在調用階段，導致分文件編寫時鏈接不到
	- 解決方式
	將聲明和實現寫到同一個文件中，並更改後綴名為`*.hpp`(約定的名稱)

<br>

## lec181-lec187
- hw49
- hw50 (總結知識點)
- hw51

1. 類模板、友元與全局函數
	- 全局函數類內實現 - 直接在類內聲明友元即可
	```cpp
	friend void print(Person<T1, T2> & p){}
	```
	- 全局函數類外實現 - 需要**提前**讓編譯器知道全局函數的存在
	```cpp
	template<class T1, class T2> 
	class Person;

	template<class T1, class T2>
	void print(Person<T1, T2> & p){}
	```

2. STL(Standard Template Library,標準模板庫)<br>
從廣義上分為
- **容器(container)**<br>
將運用最廣泛的一些數據結構實現出來
- **算法(algorithm)**<br>
分為質變算法(更改區間內的元素)和非質變算法
- **疊代器(iterator)** - 容器與算法之間連接<br>
提供一種方法，使之能夠依序尋訪某個容器所含的各個元素，而又無需暴露該容器的內部表示方式。每個容器都有自己專屬的疊代器。使用非常類似於指針

3. 使用方式
	1. 創建vector容器對象
	```cpp
	vector<int> v;
	```
	2. 向容器中放數據
	```cpp
	v.push_back(10);
	```
	3. 疊代器(用來遍歷容器中的元素，每一個容器都有自己的疊代器)
	```cpp
	for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}
	```
	也可使用STL提供標準遍歷算法  需頭文件<algorithm>
	```cpp
	for_each(v.begin(), v.end(), function);
	```

<br>

## lec188-lec192
- hw52

1. `string`介紹<br>
`string`是`C++`風格的字符串，本質上是一個類，類內部封裝了`char*`這個指針，**管理char*所分配的內存**，因此使用者不需要擔心複製越界和取值越界等，是一個`char*`型的容器，此外內部也封裝了很多**成員函數**。


1. `string`構造函数
	- `string();`          		   創建一個空的字符串
	- `string(const char* s);`	   使用字符串s初始化
	- `string(const string& str);` 使用一個string對象初始化另一個string對象
	- `string(int n, char c);`     使用n個字符c初始化

2. `string`賦值操作
	- `string& operator=(const char* s);`    char*類型字符串 賦值給當前的字符串
	- `string& operator=(const string &s);`  把字符串s賦給當前的字符串
	- `string& operator=(char c);`           字符賦值給當前的字符串
	- `string& assign(const char *s);`       把字符串s賦給當前的字符串
	- `string& assign(const char *s, int n);`把字符串s的前n個字符賦給當前的字符串
	- `string& assign(const string &s);`     把字符串s賦給當前字符串
	- `string& assign(int n, char c);`       用n個字符c賦給當前字符串

3. `string`字符串拼接
	- `string& operator+=(const char* str);`             重載+=操作符
	- `string& operator+=(const char c);`                重載+=操作符
	- `string& operator+=(const string& str);`           重載+=操作符
	- `string& append(const char *s); `                  把字符串s連接到當前字符串結尾
	- `string& append(const char *s, int n);`            把字符串s的前n個字符連接到當前字符串結尾
	- `string& append(const string &s);`                    同operator+=(const string& str)
	- `string& append(const string &s, int pos, int n);`    字符串s中從pos開始的n個字符連接到字符串結尾

4. `string`查找和替換(`find`查找是從左往後，`rfind`從右往左，找不到返回`std::string::npos`)
	- `int find(const string& str, int pos = 0) const;`     查找str第一次出現位置,從pos開始查找
	- `int find(const char* s, int pos = 0) const; `         查找s第一次出現位置,從pos開始查找
	- `int find(const char* s, int pos, int n) const; `     從pos位置查找s的前n個字符第一次位置
	- `int find(const char c, int pos = 0) const; `         查找字符c第一次出現位置
	- `int rfind(const string& str, int pos = npos) const;` 查找str最後一次位置,從pos開始查找
	- `int rfind(const char* s, int pos = npos) const;`     查找s最後一次出現位置,從pos開始查找
	- `int rfind(const char* s, int pos, int n) const;`     從pos查找s的前n個字符最後一次位置
	- `int rfind(const char c, int pos = 0) const;  `       查找字符c最後一次出現位置
	- `string& replace(int pos, int n, const string& str); `替換從pos開始n個字符為字符串str
	- `string& replace(int pos, int n,const char* s); `     替換從pos開始的n個字符為字符串s

<br>

## lec193-lec204
- hw53
- hw54

1. `string`字符串比較
	- `int compare(const string &s) const;` 與字符串s比較
	- `int compare(const char *s) const;`   與字符串s比較
	- 按字符的ASCII碼進行對比`=`->`0`; `>`->`1`; `<`->`-1`

2. `string`字符存取
	- `char& operator[](int n); ` 通過[]方式取字符
	- `char& at(int n);   `       通過at方法獲取字符

3. `string`插入和删除
	- `string& insert(int pos, const char* s);  `    插入字符串
	- `string& insert(int pos, const string& str); ` 插入字符串
	- `string& insert(int pos, int n, char c);`      在指定位置插入n個字符c
	- `string& erase(int pos, int n = npos);`        刪除從Pos開始的n個字符

4. `string`子串
	- `string substr(int pos = 0, int n = npos) const;` 返回由pos開始的n個字符組成的字符串

5. `vector`介紹<br>
vector數據結構和數組非常相似，也稱單端數組，不同之處在於vector可以**動態擴展**，而動態擴展並不是在原空間之後續接新空間，而是找更大的內存空間，然後將原數據拷貝新空間，釋放原空間。由於vector維護的是一個連續線性空間，所以vector容器的疊代器是支持隨機存取。

6. `vector`構造函数
	- `vector<T> v; `               採用模板實現類實現，默認構造函數
	- `vector(v.begin(), v.end());` 將`v[begin(), end())`區間中的元素拷貝給本身
	- `vector(n, elem);`            構造函數將n個elem拷貝給本身
	- `vector(const vector &vec);`  拷貝構造函數

7. `vector`賦值操作
	- `vector& operator=(const vector &vec);` 重載等號操作符
	- `assign(beg, end);` 將`[beg, end)`區間中的數據拷貝賦值給本身
	- `assign(n, elem);`  將n個elem拷貝賦值給本身

8. `vector`容量和大小
	- `empty(); `            判斷容器是否為空
	- `capacity();`          容器的容量
	- `size();`              容器中元素的個數
	- `resize(int num);`     重新指定容器的長度為num，若容器變長，則以默認值填充新位置；如果容器變短，則末尾超出容器長度的元素被刪除
	- `resize(int num, elem);`重新指定容器的長度為num，若容器變長，則以elem值填充新位置

9. `vector`插入和刪除
	- `push_back(ele);`                                  尾部插入元素ele
	- `pop_back();`                                      刪除最後一個元素
	- `insert(const_iterator pos, ele);`                 疊代器指向位置pos插入元素ele
	- `insert(const_iterator pos, int count, ele);`      疊代器指向位置pos插入count個元素ele
	- `erase(const_iterator pos);`                       刪除疊代器指向的元素
	- `erase(const_iterator start, const_iterator end);` 刪除疊代器從start到end之間的元素
	- `clear();`                                         刪除容器中所有元素

10. `vector`數據存取
	- `at(int idx); ` 索引idx所指的數據
	- `operator[]; `  索引idx所指的數據
	- `front(); `     容器中第一個數據元素
	- `back();`       容器中最後一個數據元素

11. `vector`互換容器
- `swap(vec);`  將vec與本身的元素互換
- 用途:vector<int>(v)調用拷貝構造函數，並按照`v`目前所用的個數來初始化對象，再利用`swap`成員函數，內部相當於指針進行互換，匿名對象指向原本的容器，而當匿名對象沒有進行綁定操作，會自動進行析構，因此原空間會被釋放。
```cpp
vector<int> v;
for (int i = 0; i < 100000; i++)
	v.push_back(i);
v.resize(3);
//收縮內存
vector<int>(v).swap(v); //匿名對象
```
12. `vector`預留空間
- `reserve(int len);` 容器預留len個元素長度，預留位置不初始化，元素不可訪問
- 用途:減少vector在動態擴展容量時的擴展次數


12. `dequeue`原理<br>
雙端數組(double—ended queue)，deque相對vector，對頭部的插入刪除速度會比較快，但是訪問元素時的速度較慢。
<br><br>
![](img/deque.png)
deque由**一段一段的定量連續空間**構成。一旦有必要在deque的前端或尾端增加新空間，便配置一段定量連續空間，串接在整個deque的頭端或尾端。deque的最大任務，便是在這些分段的定量連續空間上，維護其整體連續的假象，並提供隨機存取的接口。避開了"重新配置、複製、釋放"的輪回，代價則是複雜的疊代器架構。
<br><br>
deque採用一塊所謂的map（注意，不是STL的map容器）作為主控。這裡所謂map是一小塊連續空間，其中每個元素（此處稱為一個節點，node）都是指針，指向另一段（較大的）連續線性空間，稱為緩沖區。
<br><br>
讓我們思考一下，deque的疊代器應該具備什麽結構，首先，它必須能夠指出分段連續空間（亦即緩沖區）在哪裡，其次它必須能夠判斷自己是否已經處於其所在緩沖區的邊緣，如果是，一旦前進或後退就必須跳躍至下一個或上一個緩沖區。為了能夠正確跳躍，deque必須隨時掌握管控中心（map）。所以在疊代器中需要定義：當前元素的指針，當前元素所在緩沖區的起始指針，當前元素所在緩沖區的尾指針，指向map中指向所在緩區地址的指針，分別為cur, first, last, node。

13. `dequeue`構造函數
	- `deque<T>` deqT;           默認構造形式
	- `deque(beg, end);`         構造函數將[beg, end)區間中的元素拷貝給本身
	- `deque(n, elem);`          構造函數將n個elem拷貝給本身。
	- `deque(const deque &deq);` 拷貝構造函數

<br>

## lec205-lec210
- hw55 (`person class`存進`vector`，遍歷每個`vector`，並將評委分數存到`deque`，分數用`sort()`排，利用`deque`容器特性方便去頭去尾，算出平均數後再存進每一個`person class`裡面)

1. `dequeue`賦值操作
	- `deque& operator=(const deque &deq);` 重載等號操作符
	- `assign(beg, end);`                   將`[beg, end)`區間中的數據拷貝
	- `assign(n, elem);`                    將n個elem拷貝

2. `dequeue`大小操作
	- `deque.empty();`     判斷容器是否為空
	- `deque.size();`      返回容器中元素的個數
	- `deque.resize(num);` 重新指定容器的長度為num，若容器變長，則以默認值填充新位置。如果容器變短，則末尾超出容器長度的元素被刪除
	- `deque.resize(num, elem);` 重新指定容器的長度為num，若容器變長，則以elem值填充新位置
	- `deque`沒有像`vector`一樣有`capacity`的概念，因為內部實現不同

3. `dequeue`插入與刪除
- 兩端插入操作:
	- `push_back(elem);`   尾部添加一個數據
	- `push_front(elem);`  頭部插入一個數據
	- `pop_back();`        刪除最後一個數據
	- `pop_front();`       刪除第一個數據

- 指定位置操作：
	- `insert(pos,elem);`   在pos位置插入一個elem元素的拷貝，返回新數據的位置
	- `insert(pos,n,elem);` 在pos位置插入n個elem數據，無返回值
	- `insert(pos,beg,end);`在pos位置插入`[beg,end)`區間的數據，無返回值
	- `clear();`            清空容器的所有數據
	- `erase(beg,end);`     刪除`[beg,end)`區間的數據，返回下一個數據的位置
	- `erase(pos);`         刪除pos位置的數據，返回下一個數據的位置

4. `deque`數據存取
	- `at(int idx); `返回索引idx所指的數據
	- `operator[]; ` 返回索引idx所指的數據
	- `front(); `    返回容器中第一個數據元素
	- `back();`      返回容器中最後一個數據元素

<br>

## lec211-lec222
- hw56
- hw57
- hw58

1. `stack`(First In Last Out, FILO)
- 構造函數
	- `stack<T> stk;`            stack採用模板類實現，stack對象的默認構造形式
	- `stack(const stack &stk);` 拷貝構造函數

- 賦值操作
	- `stack& operator=(const stack &stk);` 重載等號操作符

- 數據存取
	- `push(elem);` 向棧頂添加元素
	- `pop();`      從棧頂移除第一個元素
	- `top(); `     返回棧頂元素

- 大小操作
	- `empty();`    判斷堆棧是否為空
	- `size(); `    返回棧的大小

2. `queue` (First In First Out,FIFO)
- 構造函數
	- `queue<T> que;`            queue採用模板類實現，queue對象的默認構造形式
	- `queue(const queue &que);` 拷貝構造函數

- 賦值操作
	- `queue& operator=(const queue &que);` 重載等號操作符

- 數據存取
	- `push(elem);`  往隊尾添加元素
	- `pop();`       從隊頭移除第一個元素
	- `back();`      返回最後一個元素
	- `front(); `    返回第一個元素

- 大小操作
	- `empty();` 判斷堆棧是否為空
	- `size(); ` 返回棧的大小

3. `list`原理<br>
環狀雙向鏈表，插入和刪除操作十分方便，修改指針即可，但空間(指針域)和時間(遍歷)額外耗費較大
![](img/list.png)

4. `list`構造函數
	- `list<T> lst;`           list採用模板類實現，對象的默認構造形式
	- `list(beg,end);`         構造函數將`[beg, end)`區間中的元素拷貝給本身
	- `list(n,elem);`          構造函數將n個elem拷貝給本身
	- `list(const list &lst);` 拷貝構造函數

5. `list`賦值和交換
	- `assign(beg, end);`                 將`[beg, end)`區間中的數據拷貝賦值給本身
	- `assign(n, elem);`                  將n個elem拷貝賦值給本身
	- `list& operator=(const list &lst);` 重載等號操作符
	- `swap(lst);`                        將lst與本身的元素互換

6. `list`大小操作
	- `size(); `            返回容器中元素的個數
	- `empty(); `           判斷容器是否為空
	- `resize(num);`        重新指定容器的長度為num，若容器變長，則以默認值填充新位置
	- `resize(num, elem); ` 重新指定容器的長度為num，若容器變長，則以elem值填充新位置

7. `list`數據存取
	- `push_back(elem);`       在容器尾部加入一個元素
	- `pop_back();`            刪除容器中最後一個元素
	- `push_front(elem);`      在容器開頭插入一個元素
	- `pop_front();`           從容器開頭移除第一個元素
	- `insert(pos,elem);`      在pos位置插elem元素的拷貝，返回新數據的位置
	- `insert(pos,n,elem);`    在pos位置插入n個elem數據，無返回值
	- `insert(pos,beg,end);`   在pos位置插入`[beg,end)`區間的數據，無返回值
	- `clear();`               移除容器的所有數據
	- `erase(beg,end);`        刪除`[beg,end)`區間的數據，返回下一個數據的位置
	- `erase(pos);`            刪除pos位置的數據，返回下一個數據的位置
	- `remove(elem);`          刪除容器中所有與elem值匹配的元素

8. `list`數據存取
	- `front();` 返回第一個元素
	- `back();`  返回最後一個元素

9. `list`反轉和排序
	- `reverse();`  反轉鏈表
	- `sort();`     鏈表排序(成員函數、默認的排序規則，從小到大；指定規則，從大到小)

## lec223-lec230
- hw59
- hw60
- hw61

1. `set`原理<br>
由**紅黑樹(Red-black Tree)** 實現，紅黑樹是一種自平衡二叉查找樹，可以在自動排序、插入操作和刪除操作上比`vector`快、不可以直接存取元素。<br><br>
`set`支援唯一鍵值，每個元素值**只能出現一次**；而`multiset`中同一值可以出現多次。

2. `set`構造和賦值
	- `set<T> st;`                     默認構造函數
	- `set(const set &st);`            拷貝構造函數
	- `set& operator=(const set &st);` 重載等號操作符

3. `set`大小和交換
	- `size();`   返回容器中元素的數目
	- `empty();`  判斷容器是否為空
	- `swap(st);` 交換兩個集合容器

4. `set`插入和刪除
	- `insert(elem);`     在容器中插入元素
	- `clear();`          清除所有元素
	- `erase(pos);`       刪除pos疊代器所指的元素，返回下一個元素的疊代器
	- `erase(beg, end);`  刪除區間`[beg,end)`的所有元素 ，返回下一個元素的疊代器
	- `erase(elem);`      刪除容器中值為elem的元素

5. `set`查找和統計
	- `find(key);`   查找key是否存在。存在:返回該鍵的元素的疊代器；不存在:返回`set.end();`
	- `count(key);`  統計key的元素個數。對於set而言，由於元素值不允許重複，因此只有0、1兩種可能

6. [`pair`用法](https://blog.csdn.net/sevenjoin/article/details/81937695)
包含在頭文件`#include<utility>`中，pair是將2個數據組合成一組數據，當需要這樣的需求時就可以使用pair，如stl中的`map`就是將key和value放在一起來保存。另一個應用是，當一個函數需要返回2個數據的時候，可以選擇pair。 pair的實現是一個**結構體**，主要的兩個成員變量是`first`, `second`，因為是使用struct不是class，所以可以直接使用pair的成員變量。

7. `pair`創建
	- `pair<type, type> p ( value1, value2 );`
	- `pair<type, type> p = make_pair( value1, value2 );`

8. `emplace`函數
emplace操作是C++11新特性，引入三個成員函數`emlace_front`, `empace`, `emplace_back`分別對應`push_front`, `insert`, `push_back`。<br><br>
當調用insert時，我們將元素類型的對象傳遞給insert，元素的對象被拷貝到容器中，而當我們使用emplace時，我們將參數傳遞元素類型的構造函數，**emplace使用這些參數在容器管理的內存空間中直接構造元素**。

9. `lambda`匿名函數
- 語法
```cpp
[外部變量訪問方式說明符] (參數) mutable noexcept/throw() -> 返回值類型
{
   函數體;
};
```
- mutable參數<br>
可省略，如果使用則之前的()小括號將不能省略（參數個數可以為 0）。默認情況，對於以值傳遞方式引入的外部變量，不允許在`lambda`表達式內部修改它們的值(可以理解為這部分**變量都是`const`常量**)。而如果想修改它們，就必須使用`mutable`關鍵字。<br><br>注意: 對於以值傳遞方式`[=]`引入的外部變量，`lambda`表達式**修改的是拷貝的那一份**，並不會修改真正的外部變量。
- 範例
```cpp
//display 即為 lambda 匿名函數的函數名
auto display = [](int a,int b) -> void{cout << a << " " << b;};
//調用 lambda 函數
display(10,20);
```


- 參考
	- [匿名函式wiki](https://zh.wikipedia.org/wiki/%E5%8C%BF%E5%90%8D%E5%87%BD%E6%95%B0#C.2B.2B)
	- [C++11 lambda匿名函数用法详解](http://c.biancheng.net/view/7818.html)

10. [`try throw catch`異常處理](https://www.jb51.net/article/172352.htm)
```cpp
try {
    語句組
}
catch(異常類型) {
    異常處理代碼
}
...
catch(異常類型) {
    異常處理代碼
}
```

## lec231-lec236
- hw62
- hw63

1. `map`原理<br>
與set一樣都是由紅黑樹實現，差別在於map中所有元素都是pair，pair中第一個元素為key（鍵值)起到索引作用，第二個元素為value（實值）。map不允許容器中有重覆key值元素；multimap則允許。

## lec237-lec263