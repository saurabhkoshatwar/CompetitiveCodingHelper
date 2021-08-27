# String Handling

## Declare

```Java
String str = "Saurabh";
```

## Get Length

```Java
str.length();
```

## Access ith element


```Java
str[i];
```
  
## Get Substring

  
* ### between 2 indices
```Java
//startIndex : starting index is inclusive
//endIndex : ending index is exclusive

s1.substring(2,4)
```  
  
<!-- * ### based on other string
```c++
#include <string>

size_t pos = str.find("live");      // position of "live" in str
string str3 = str.substr(pos);     // get from "live" to the end  
```   -->
  
## Sort string

* ### Ascending
```Java
String abcd = "bdca";
char[] chars = abcd.toCharArray();

Arrays.sort(chars);
String sorted = new String(chars);
```  

## Split string on delimiter to an array

```Java
String Str = new String("Geeks-for-Geeks");
String arr[] = Str.split("-");
```

## String Reverse

```Java
String input = "Geeks for Geeks";
 
StringBuilder input1 = new StringBuilder();

// append a string into StringBuilder input1
input1.append(input);

// reverse StringBuilder input1
input1.reverse();

String rev = input1.toString();
```
