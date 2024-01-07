#include <iostream>
#include <string>
using namespace std ;
int main () {
    string key,ans ;
    //cin >> key error?
    getline(cin,key);
    getline(cin,ans) ;
    int lkey = key.length() ;
    int lans = ans.length() ;
    if(lkey == lans){
        int count = 0 ;
        for(int i=0; i<lkey ; i++){
            if(key[i]==ans[i])count ++ ;
        }cout << count ;
    }else{ cout<< "Incomplete answer" ;}
}