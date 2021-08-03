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
- [lec12-lec30](#lec12-lec30) 2021/08/03


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

## lec12-lec30
1. 字符串
- C風格 `char str1[] = "hello world";`
- C++風格 `string str = "hello world";`須包含頭文件`#include<string>`

2. `bool` true=1, false=0，占用一個byte

3. `bool`類型只要非0的值都代表真