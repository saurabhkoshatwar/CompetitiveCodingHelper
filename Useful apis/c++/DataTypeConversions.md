# Useful DataTypeConversions apis

## String to Int - stoi()
```c++
#include <string>

string str1 = "45";
string str2 = "3.14159";
string str3 = "31337 geek";

int myint1 = stoi(str1);
int myint2 = stoi(str2);
int myint3 = stoi(str3);

//stoi("45") is 45
//stoi("3.14159") is 3
//stoi("31337 geek") is 31337 
```

## char to Int
```c++
//ASCII code, the numbers (digits) start from 48 -> '0' zero
char c1 = "45";
int i = c1 - '0'; 
```
