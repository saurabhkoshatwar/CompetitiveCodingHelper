# Vector

## Declare

```c++
vector<int> v1; 
vector<string> v2; 
```

## Insert

* ### At last
```c++
 v1.push_back(i); 
 //Template shortform
 v1.pb(i);
```
* ###  At ith position
```c++
 vec.insert(vec.begin() + i, 7); 
 ```
## Delete

* ###  From last
```c++
myvector.pop_back(); 
```
* ###  ith position
```c++
 vec.erase(vec.begin() + i); 
 ```

## Access

```c++
g1[i];
g1.at(i)
//Assign
g1[i]=2;
``` 

## Checkif Element Exist and getElement by Value

```c++
if(s.find(x)!=s.end()){
    vector<ll>::iterator it = s.find(x);
    cout<<*it;
    s.erase(it);
}
``` 

## Iterate

```c++
for (int i=0; i<vec.size(); i++) {  
        cout << vect[i] << endl; 
} 
    
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

## Sort Vector

* ### Ascending
```c++
 sort(v.begin(), v.end()); 
 sort(all(v));
 //shortForm
 //Aplicable on String array also
``` 
* ### Descending
```c++
sort(v.begin(), v.end(), greater<int>()); 
sort(all(v), greater<int>());
//shortForm

//Aplicable on String array also
``` 

