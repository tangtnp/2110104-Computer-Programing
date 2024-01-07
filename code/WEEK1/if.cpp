/*
#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a ;
    bool condition = a>=200 ;
    if (condition) {
        cout << "20 percent off" << endl ;
        a *= 0.8 ;
    }
    cout << a ;
}
*/
/*
#include <iostream>
using namespace std;
int main() {
cout << true << endl;
cout << false << endl;
cout << (1 < 2) << endl;
cout << (1 > 2) << endl;
cout << "-----" << endl;
bool a,b,c;
a = (1 == 2); // false
b = 'a' != 'b'; // true
c = '1' < 'a'; // true (char use ASCII number for comparison)
cout << a << endl;
cout << b << endl;
cout << c << endl;
cout << "-----" << endl;
cout << (a || b) << endl;
cout << (a && b) << endl;
cout << (!a && b) ;
}
*/
/*
#include <iostream>
using namespace std;
int main(){
    string a ;
    cin >> a ;
    bool condition = (a == "01"|| a =="02"|| a =="20"|| a =="21" || a =="22"|| a =="23"|| a =="24"|| a =="25"||a =="26"||a =="27"||a =="28"||a =="29"||a =="30"||a =="31"||a =="32"||a =="33"||a =="34"||a =="35"||a =="36"||a =="37"||a =="38"||a =="39"||a =="40"||a =="51"|| a == "53"||a =="55"||a =="58");
    if(condition){
        cout << "OK" ;
    } else {
        cout << "Error" ;
    }
} */
/*
#include <iostream>
using namespace std;
int main(){
    int d, m, y, n;
    cin >> d >> m >> y ;
    int y1 ;
    y = y-543;
    //if (y%400 == 0 || y%4==0 && y%100 != 0){}
    n = 31 ;
    if (m==4 || m==6 || m==9 || m== 11){
        n=30 ;
    } if(m==2) {
        n=28;
        if (y%400 == 0 || y%4==0 && y%100 != 0){ n= 29 ;}
        }
    
    d=d+15;
    if(d>n){
        d = d-n ;
        m = m+1 ;
    }
    if(m>12){
        m=m-12;
        y=y+1;
    }
    y = y+543;
    cout << d <<"/" << m << "/" << y ;
    
} */
/*

#include <iostream>
using namespace std;
int main() {
    double a,b,c,d,max,min;
    cin >> a>>b>>c>>d ;
    if (a>b && b>c && c>d){
        max = a ;
    }else if (b>c && c>d){
        max = b ;
    }else if (c>d){
        max = c ;
    }else{max = d;}

}*/
/*
#include <iostream>
#include<cmath>
using namespace std;
int main() {
    double a,b,c,d,max,min;
    cin >> a>>b>>c>>d ;
    if (a>=b && a>=c && a>=d){
        max = a ;
    }else if (b>=a && b>=c && b>=d){
        max = b ;
    }else if (c>=a && c>=b && c>=d){
        max = c ;
    }else{max = d;}

    if (a<=b && a<=c && a<=d) {
        min = a ;
    }else if (b<=a && b<=c && b<=d){
        min = b ;
    }else if (c<=a && c<=b && c<=d){
        min = c ;
    }else {min =d ;}

    double av ;
    av = (a+b+c+d-max-min)/2 ;
    cout<< round(av*100.0)/100.0 << endl ;
    }*/