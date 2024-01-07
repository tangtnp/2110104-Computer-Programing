#include <iostream>
#include <cmath>
using namespace std ;
int main () {
    int d ,m,Y ;
    cin >> d >> m >> Y ;
    int n ,y ;
    y = Y-543;
    if(y%400 == 0 || y%4==0 && y%100 != 0){ n= 29 ;
    }else{n=28;}
    
    if(m==1){cout<< d;}
    else if (m==2){cout << 31 + d ;}
    else if (m==3){cout << 31 + n + d ;}
    else if (m==4){cout << 31 + n + 31 + d ;}
    else if (m==5){cout << 31 + n + 31 + 30 + d ;}
    else if (m==6){cout << 31 + n + 31 + 30 +31+ d ;}
    else if (m==7){cout << 31*3 + 30*2 + n + d ;}
    else if (m==8){cout << 31*4 + 30*2 + n + d ;}
    else if (m==9){cout << 31*5 + 30*2 + n + d ;}
    else if (m==10){cout << 31*5 + 30*3 + n + d ;}
    else if (m==11){cout << 31*6 + 30*3 + n + d ;}
    else{cout << 31*6 + 30*4 + n + d ;}
}