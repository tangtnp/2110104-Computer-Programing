#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){
    long double x ;
    cin >> x ;
    if (x<1000 && x>= 0){
        cout<< x <<endl ;
    }
    else if (x<10000 && x >=1000){
        cout<< (round(x/100))/10.0 << "K" <<endl ;
    }
    else if (x<1000000 && x >=10000){
        cout << (round(x/1000))<< "K" ;
    }
    else if (x<10000000 && x >=1000000){
        cout<< (round(x/100000))/10.0 << "M" <<endl ;
    }
    else if (x<1000000000 && x >=10000000){
        cout<< (round(x/1000000)) << "M" <<endl ;
    }
    else if(x<10000000000 && x>=1000000000){
        cout<< (round(x/100000000))/10.0 << "B" <<endl ;
    } else{cout<< (round(x/1000000000)) << "B" <<endl ;}
}