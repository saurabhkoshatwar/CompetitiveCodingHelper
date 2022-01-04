# Vector

## Declare

```c++
vector<int> v1; 
vector<string> v2; 
```

## Initialize

```c++
// Create a vector of size n with
// all values as 10.
vector<int> vect(n, 10);

// Create a vector of size m X n with
// all values as -1.
vector<vector<int>> dp(m,vector<int>(n,-1));
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
* ### To Delete all elements/ clear array
```c++
myvector.clear();
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
#include <algorithm>
if (std::find(v.begin(), v.end(), key) != v.end()) {
        std::cout << "Element found";
}
else {
    std::cout << "Element not found";
}
    
/*if(s.find(x)!=s.end()){
    vector<ll>::iterator it = s.find(x);
    cout<<*it;
    s.erase(it);
}*?
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
* ### Sort multiple vector based on just 1 vector
```c++
// make struct of all vectors and then sort

struct allvec
{
    int v1data, v2data, v3data;
};

//initiallize  just example ignore 
allvec obj1 = { 1,1,1,1 };
allvec obj2 = { 3,3,3,3 };

/*            ----------------------IMP----------------
//OR similar to below

struct job{
.......
};

vector<job> js

for(int i=0;i<startTime.size();i++){
    jobs temp = {startTime[i],endTime[i],profit[i]};
    js.push_back(temp);
}

*/

vector<allvec> vecs;
vecs.push_back(obj1);
vecs.push_back(obj2);

sort(vecs.begin(), vecs.end(), [](const allvec& c1, const allvec& c2) {
    return c1.v1data < c2.v1data;
});

``` 

## Pass vector to function

* ### by reference
```c++
void callmefunc(vector<vector<int>>& dp){
}
void callmefunc(vector<int>& dp){
}

void main(){
vector<int> dp;
calmefunc(dp);
}
``` 


