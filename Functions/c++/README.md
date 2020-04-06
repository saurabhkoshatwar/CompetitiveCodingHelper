
## Duplicate check
```c++
bool duplicateCheck(int x){
    for(int i=0;i<n;i++){
        if(vec.find(x)!=vec.end()){
            vec.pb(x);
            return false;
        }else{
            return true;
        }
    }
}
```
