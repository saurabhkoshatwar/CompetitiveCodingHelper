# Vector of Pairs Similar to Map

## Declare

```c++
vector<pair<ll, ll>> temps;
// ll : long
```

## Insert

* ### At last
```c++
 v1.pb(mp(2,3));
```
* ###  At ith position
```c++
 vec.insert(vec.begin() + i, mp(2,3)); 
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
g1[i].first;
g1[i].fi;

g1[i].second;
g1[i].si;

g1.at(i);

//Assign
g1[i]=mp(2,3);
gi[i].fi = 2;
gi[i].si = 3;
``` 

## Iterate

```c++
for (auto i = g1.begin(); i != g1.end(); ++i) 
        cout << *i << " "; 

for (int i=0; i<vec.size(); i++) { 
        // "first" and "second" are used to access 
        // 1st and 2nd element of pair respectively 
        cout << vect[i].first << " "<< vect[i].second << endl; 
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

## Sort Vector

* ### Ascending
```c++
 sort(v.begin(), v.end()); 
 sort(all(v));
 //shortForm
 //Aplicable on String array also
 
 //Sort By Value/Second Element
 bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){ 
    return (a.second < b.second); 
 }
 sort(vect.begin(), vect.end(), sortbysec); 
 sort(all(v), sortbysec);
 //shortForm
``` 
* ### Descending
```c++
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b){ 
       return (a.first > b.first); 
}   
sort(vect.begin(), vect.end(), sortinrev); 
sort(all(v), sortinrev);
//shortForm
 
bool sortbysecdesc(const pair<int,int> &a, const pair<int,int> &b) { 
       return a.second>b.second; 
} 
sort(vect.begin(), vect.end(), sortbysecdesc); 
sort(all(v), sortbysecdesc);
//shortForm
``` 

