# Vector

## Declare

```c++
vector<int> v1; 
vector<string> v2; 
```

## Insert

### At last
```c++
 v1.push_back(i); 
 //Template shortform
 v1.pb(i);
```
### At ith position
```c++
 vec.insert(vec.begin() + i, 7); 
 ```
## Delete

### From last
```c++
myvector.pop_back(); 
```
### ith position
```c++
 vec.erase(vec.begin() + i); 
 ```

## Access

```c++
g1[i];
g1.at(i)
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
        cout << "\nVector is not empty"; 
    else
        cout << "\nVector is empty"; 
``` 

