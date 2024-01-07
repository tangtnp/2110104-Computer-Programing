#include<iostream>
#include<string>
using namespace std ;
int main(){
    string a ;
    cin >> a ;
    int count = 0 ;
    for (int i = 0; i< a.length() ; i++){
        if(a[i]==a[i+1]){
            count++ ;
        }
        cout << a[i] << " " << count << endl ;
        count = 0 ;
    }
}