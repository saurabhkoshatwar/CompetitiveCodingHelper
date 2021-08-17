# String Handling

## Declare

```c++
string str = "Saurabh";
```

## Get Length

```c++
cout << str.length() << endl;
```
#include <string>
  
## Get Substring

* ### by position
```c++
#include <string>
string str2 = str.substr(3,5);
string str2 = str.substr(3);  // from 3 to end
```
  
* ### based on other string
```c++
#include <string>

size_t pos = str.find("live");      // position of "live" in str
string str3 = str.substr(pos);     // get from "live" to the end  
```  
  
