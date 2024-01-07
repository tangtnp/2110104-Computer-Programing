#include <iostream>
#include <string>
using namespace std ;
int main(){
    string sen ;
    getline(cin,sen) ;
    for(int i=0 ; i<sen.length() ; i++){
        if (sen[i]=='(' ) {sen[i]= '[' ;}
        else if (sen[i]=='[' ) {sen[i]= '(' ;}  
        else if (sen[i]==')' ) {sen[i]= ']' ;}
        else if (sen[i]==']' ) {sen[i]= ')' ;}
    }
    cout << sen << endl ;
}