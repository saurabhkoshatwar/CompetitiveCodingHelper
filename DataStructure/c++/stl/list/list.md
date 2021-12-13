# List

## Declare

```c++
list<int> l1; 
list<string> l2; 
```


## Insert

* ### At last
```c++
 l1.push_back(i); 
 //Template shortform
 l1.pb(i);
```
* ###  At first
```c++
 l1.push_front(i); 
 ```
 
 
## Delete

* ###  From last
```c++
l1.pop_back(); 
```
* ###  From first
```c++
l1.pop_front(); 
```
* ###  Based on reference
```c++
list<int>::iterator it = // some referece to element
l1.erase(it); 
```


## Access

```c++
g1.back()
//get last element
g1.front()
//get first element
``` 


## Iterate

```c++
    
for (auto i = g1.begin(); i != g1.end(); ++i) 
        cout << *i << " "; 
``` 

### Size
```c++
g1.size()
``` 

### IsEmpty
```c++
if (g1.empty() == false) 
        cout << "\List is not empty"; 
    else
        cout << "\List is empty"; 
``` 

