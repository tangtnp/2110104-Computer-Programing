#include <iostream>
using namespace std ;
int main() {
    string pass ;
    while(getline(cin,pass)){
    int lenpass = pass.length() ;
//check big small num special
        bool big = false ;
        bool small = false ;
        bool num = false ;
        bool special =false ;
        for(char c : pass){
            if ('0'<=c && '9' >= c ) num = true ;
            else if ('a'<=c && 'z' >= c ) small = true ;
            else if ('A'<=c && 'Z' >= c ) big = true ;
            else special = true ;}
        string ans ;
        if (lenpass>=12 && num && small && big && special) ans = "strong";
        else if (lenpass>=8 && num && small && big ) ans = "weak";
        else ans = "invalid";
        cout << ">> "<< ans << endl ;
}
}
