# Useful Arithmetic apis

## MAX and MIN VALUE

```c++
int price = INT_MAX;
//2147483647

int price = INT_MIN;
//-2147483648

```

## max

```c++
#include <algorithm>

cout << "max(1,2)==" << max(1,2) << '\n'; 
//max(1,2)==2
cout << "max(2,1)==" << max(2,1) << '\n';  
//max(2,1)==2
cout << "max('a','z')==" << max('a','z') << '\n';  
//max('a','z')==z
cout << "max(3.14,2.73)==" << max(3.14,2.73) << '\n';  
//max(3.14,2.73)==3.14

```

## Absolute VALUE

```c++
#include <cmath> 
abs(-10.6);
```
