#include <iostream>
using namespace std ;
int main(){
    float p ;
    cin >> p ;
    int k=1 ;
    float t=1 ;
    //for (k=1 ; 1-t < p ; k++){t = (t*(365-(k-1)))/365 ;}
    while(1-t <p){
        ++k ;
        t = (t*(365-(k-1)))/365 ;
    }
    cout << k ;
}