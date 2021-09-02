# unordered Set
* ###  When all elements are unique unordered Set is very fast for searching element 

## Declare

```c++
unordered_set <string> stringSet
```

<!-- ## Initialize

```c++
// Create a vector of size n with
// all values as 10.
vector<int> vect(n, 10);
``` -->

## Insert

```c++
stringSet.insert("code")
```

## Delete/Erase


```c++

unordered_set<string> sampleSet = { "geeks1", "for", "geeks2" };

// erases a particular element
sampleSet.erase("geeks1");

// erases from where "for" is
sampleSet.erase(sampleSet.find("for"), sampleSet.end());
```

 
<!-- ## Access

```c++
g1[i];
g1.at(i)
//Assign
g1[i]=2;
```  -->

## Search/Checkif Element Exist and getElement by Value

```c++
// fast -- uses hashing
if (intSet.find(2) != intSet.end()){
        std::cout << "Element found";
}
else {
    std::cout << "Element not found";
}
    
``` 

## Iterate

```c++
unordered_set<int> :: iterator itr;
 
for (itr = duplicate.begin(); itr != duplicate.end(); itr++){
    cout << *itr << " ";
}
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

