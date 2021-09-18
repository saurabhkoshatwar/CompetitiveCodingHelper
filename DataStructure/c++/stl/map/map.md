# Map

## Declare

```c++
map<string, int>   registers;
```

## Initialize

```c++
// All keys will return a value of int() which is 0.

```

## Insert

* ### At last
```c++
m1.insert(pair<string, int>("foo", 40));
```
<!-- * ###  At ith position
```c++
 vec.insert(vec.begin() + i, 7);  
 ```-->

## Sort Map

* ### Using vector of pairs
```c++
bool cmp(pair<string, int>& a,
         pair<string, int>& b)
{
    return a.second < b.second;
}
  
// Function to sort the map according
// to value in a (key-value) pairs
void sort(map<string, int>& M)
{
  
    // Declare vector of pairs
    vector<pair<string, int> > A;
  
    // Copy key-value pair from Map
    // to vector of pairs
    for (auto& it : M) {
        A.push_back(it);
    }
  
    // Sort using comparator function
    sort(A.begin(), A.end(), cmp);
  
    // Print the sorted value
    for (auto& it : A) {
  
        cout << it.first << ' '
             << it.second << endl;
    }
}
```
