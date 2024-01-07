#include<iostream>
using namespace std ;
int main(){
    string x ;
    cin >> x ;
    string out ;
    int j=0 ,i =1;
    for(;i<x.length();i++){
        if(x[i]>='A' && x[i]<='Z' ||
            x[i]>='a' && x[i]<='z' && '0'<=x[i-1]&& '9'>=x[i-1] ||
            '0'<=x[i]&& '9'>=x[i]  && !('0'<=x[i-1]&& '9'>=x[i-1])){
                out += x.substr(j,i-j) + ", " ;
                j=i ;
        }
    
    }
    out += x.substr(j,i-j) + ", " ;
    out = out.substr(0,out.length()-2) ;
    cout << out << endl ;

}