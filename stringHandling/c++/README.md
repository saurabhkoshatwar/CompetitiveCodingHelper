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

* ### by position and length
```c++
#include <string>
string str2 = str.substr(3,5); // from 3 to 3+5 --- starting at position 3 and length 5
string str2 = str.substr(3);  // from 3 to end
```
  
* ### between 2 indices
```c++
#include <string>
s.substr(start,end-start+1);
```  
  
* ### based on other string
```c++
#include <string>

size_t pos = str.find("live");      // position of "live" in str
string str3 = str.substr(pos);     // get from "live" to the end  
```  
  
