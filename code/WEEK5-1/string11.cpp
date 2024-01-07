#include <iostream>
using namespace std ;
int main(){
    string t ;
    while(getline(cin,t)){ 
    char c = t[t.length()-1];
    string out ;
    int i = t.find(c,0) ;
    while(i!=t.length()-1){
        int j = t.find(c,i+1) ;
        out += t.substr(i+1,j-i-1);
        i = t.find(c,j+1);
    }cout<< out << endl;

    }      
}
