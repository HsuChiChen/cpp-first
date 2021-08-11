#include "../include/swap.h"

void swap(int a, int b){
	a ^= b;
	b ^= a; //b =a^b =(a^b)^b = a
	a ^= b; //a =a^b =(a^b)^((a^b)^b) =(a^b)^a) =b
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}