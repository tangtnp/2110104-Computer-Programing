#include <iostream>
using namespace std ;
int main(){
    int q=0 ;
    int h ; cin >> h ;
//1
    for(int j= 0 ; j< h-1 ; j++){
            cout << ".";
        }
        cout << "*"<<endl;
//2

for (int i=2 ; i<h; i++){
    for(int j= 0 ; j< h-i ; j++){cout << "." ;}
    cout << "*";
    for(int k= 1 ; k< 2*i-2 ; k++){cout << "." ; }
    cout << "*"<<endl;
    }
//3
    int i=0 ;
    while (i< 2*h-1){
        cout << "*";
        i++;}
}
