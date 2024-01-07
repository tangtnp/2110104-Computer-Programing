#include<iostream>
#include<string>
using namespace std ;
int main(){
    string a ;
    cin >> a ;
    int cnt = 1 ;
    for (int i = 0; i< a.length() ; i++){
        if(a[i]==a[i+1]){
            ++cnt ;
        }else{cout << a[i] << " " << cnt << " " ;
        cnt = 1 ;}
    }


    

}