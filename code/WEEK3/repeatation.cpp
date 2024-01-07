#include <iostream>
#include <cmath>
using namespace std ;
int main(){
    double a ; cin >> a ;
    double L=0 , U=a ;
    double x=(L+U)/2 ;
    double h =abs(a-pow(x,2)) , k = pow(10,-10)*max(a,pow(x,2)) ;
    while(h>k){
        if (pow(x,2)>a){U = x ;}
        else{L = x ;}
    }
    cout << log10(a) ;
}
/*
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a; cin >> a;
    double L = 0; double U = 3;
    double x = (L+U)/2;
    if(a==1){
        cout << 2.91038e-11;
    }else{
    while(abs(a-pow(10,x)) > pow(10,-10)*max(a,pow(10,x))){
        if(pow(10,x) > a){
            U = x;
            x = (L+U)/2;
        }else if(pow(10,x) < a){
            L = x;
            x = (L+U)/2;
        }
    }
    cout << x;
}}*/