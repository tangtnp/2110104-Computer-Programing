#include <iostream>
#include <cmath>
using namespace std ;
int main () {
    int d1 , m1 , y1 ,d2 ,m2 ,y2 ;
    cin >> d1 >> m1 >> y1 >> d2 >> m2>>y2 ;
//red
    int n1 ,Y , x1 , z;
    Y = y1-543;
    if(Y%400 == 0 || Y%4==0 && Y%100 != 0){ n1= 29 ;
    }else{n1=28;}
    
    if(m1==1){x1= d1;}
    else if (m2==2){x1 = 31 + d1 ;}
    else if (m2==3){x1 = 31 + n1 + d1 ;}
    else if (m2==4){x1 = 31 + n1 + 31 + d1 ;}
    else if (m2==5){x1 = 31 + n1 + 31 + 30 + d1 ;}
    else if (m2==6){x1 = 31 + n1 + 31 + 30 +31+ d1 ;}
    else if (m2==7){x1 = 31*3 + 30*2 + n1 + d1 ;}
    else if (m2==8){x1 = 31*4 + 30*2 + n1 + d1 ;}
    else if (m2==9){x1 = 31*5 + 30*2 + n1 + d1 ;}
    else if (m2==10){x1 = 31*5 + 30*3 + n1 + d1 ;}
    else if (m2==11){x1 = 31*6 + 30*3 + n1 + d1 ;}
    else{x1 = 31*6 + 30*4 + n1 + d1 ;}
    z=(31*7+30*4+n1)-x1 ;
 // black
    int b = (y2-y1-1)*365 ;
 // blue   
    int n ,y , x;
    y = y2-543;
    if(y%400 == 0 || y%4==0 && y%100 != 0){ n= 29 ;
    }else{n=28;}
    
    if(m2==1){x = d2;}
    else if (m2==2){x = 31 + d2 ;}
    else if (m2==3){x = 31 + n + d2 ;}
    else if (m2==4){x = 31 + n + 31 + d2 ;}
    else if (m2==5){x = 31 + n + 31 + 30 + d2 ;}
    else if (m2==6){x = 31 + n + 31 + 30 +31+ d2 ;}
    else if (m2==7){x = 31*3 + 30*2 + n + d2 ;}
    else if (m2==8){x = 31*4 + 30*2 + n + d2 ;}
    else if (m2==9){x = 31*5 + 30*2 + n + d2 ;}
    else if (m2==10){x = 31*5 + 30*3 + n + d2 ;}
    else if (m2==11){x = 31*6 + 30*3 + n + d2 ;}
    else{x = 31*6 + 30*4 + n + d2 ;}

    int t ;
    t = z + b + x ;
    

    double p , e ,i ;
    p = sin((2*M_PI*t)/23.) ;
    e = sin((2*M_PI*t)/28.) ;
    i = sin((2*M_PI*t)/33.) ;

    //cout << (31*7+30*4+n1) << " " << x1 << endl ;
    //cout << z << " " << b << " " << x << endl ;
    cout << t << " " << round(p*100.0)/100.0 << " " << round(e*100.0)/100.0 << " " << round(i*100.0)/100.0 << endl ;
}
