/*#include <iostream>
using namespace std;
int main()
{
    cout << "Tang!\n"; //แสดงผลข้อความ
    cout << "Hello C++!\n";
}




#include <iostream>
int main()
{
    std :: cout << "Hello World" << "\n";
    std :: cout << "Tang" << "\tPiya" << std::endl;
    std :: cout << "c++ basic\n" ;
}



#include <iostream>
using namespace std;
int main()
{
    cout << "Hello World" << "\n";
    cout << "Tang" << "\tPiya" << endl;
    cout << "c++ basic\n" ;
}
*/
/*
#include <iostream>
int main()
{
  std::cout<< "Hello World.\n" ;
  std::cout<< "We're using C++.";
}
*/
/*
#include <iostream>
using namespace std;
int main() {
    double a1;
    double a2;
    double a3;
    cout << "Enter the first value ";
    cin >> a1;
    cout << "Enter the second value ";
    cin >> a2;
    cout << "Enter the third value ";
    cin >> a3;
    cout << "Average is " << (a1 + a2 + a3) / 3 << endl;
}
*/
/*
#include <iostream>
using namespace std;
int main() {
    double a1, a2, a3;
    cout << "Enter the first value "; cin >> a1;
    cout << "Enter the second value "; cin >> a2;
    cout << "Enter the third value "; cin >> a3;
//calculation of the average of a1, a2, and a3
    double sum = a1+a2+a3;
    double average = sum / 3;
    cout << "Average is " << average << endl;
}
*/
/*
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a , b , c ;
    a = M_PI - (10*9*8*7*6*5*4*3*2)/pow(8,8) + pow(log(9.7),(7/sqrt(71))-sin(40* M_PI / 180)) ;
    b = pow(1.2,pow(2.3,1/3.)) ;
    c = a/b ;
    cout << c ;
}
*/
/*
#include <iostream>
using namespace std;
int main() {
double a1 , a2 , a3;
cout << "Enter the first value ";
cin >> a1;
cout << "Enter the second value ";
cin >> a2;
cout << "Enter the third value ";
cin >> a3;

}
*/
/*
#include <iostream>
using namespace std;
int main()
{
    int x = 0;
    int y ;
    cout << x << endl;
    cout << y ;
}
*/
/*
#include <iostream>
using namespace std;
int main() {
int x = 5;
int y = 0;
cout << "(1) x before " << x << endl;
y = ++x; // The operator
cout << "(2) x after " << x << endl;
cout << "(3) y is " << y << endl;
}
*/
/*
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a ;
    a = pow(2,10) ;
    cout << a << endl;

}
*/
/*
#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
int main()
{
    int W , H ;
    double M , Hay ,B ;
    cin >>  W ;
    cin >> H ;
    //Mostler
    M = sqrt(W*H) / 60 ;
    cout << setprecision(15) << M << endl ;
    //Haycock
    Hay = 0.024265 * pow(W,0.5378) * pow(H,0.3964) ;
    cout << setprecision(15) << Hay << endl ;
    //Boyd
    B = 0.0333*pow(W,0.6157-0.0188*log10(W))*pow(H,0.3);
    cout << setprecision(15) << B <<endl ;
}
*/
/*
#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
int main()
{
    double W , H;
    cin >>  W ;
    cin >> H ;
    //Mostler
    double M , Hay ,B ;
    M = sqrt(W*H) / 60 ;
    cout << setprecision(15) << M << endl ;
    //Haycock
    Hay = 0.024265 * pow(W,0.5378) * pow(H,0.3964) ;
    cout << setprecision(15) << Hay << endl ;
    //Boyd
    B = 0.0333*pow(W,0.6157-0.0188*log10(W))*pow(H,0.3);
    cout << setprecision(15) << B <<endl ;
}
*/
/*
#include <iostream>
#include <cmath>
using namespace std ;
int main() {
    double a,b,c ;
    cin >> a ;
    cin >> b ;
    cin >> c ;
    double x1 , x2 ;
    x1 = (-b- sqrt(pow(b,2)-(4*a*c)))/ (2*a) ;
    cout << round(x1*1e3)/1e3 << endl ;
    x2 = (-b +sqrt(pow(b,2)-(4*a*c)))/(2*a) ;
    cout << round(x2*1e3)/1e3;
}*/
/*
#include <iostream>
#include <cmath>
using namespace std ;
int main ()
{
    int B , C , y ;
    cin >> B ;
    C = B -543 ;
    y = C % 100 ;
    int x , z;
    x = (y+ floor(y/4) + 11) ;
    z = x%7 ;
    cout << z ; 
}*/
/*#include <iostream>
#include <cmath>
using namespace std ;
int main ()
{
    int xe,ye,re,rp,xm,ym ;
    cin >> xe ;
    cin >> ye ;
    cin >> re ;
    cin >> rp ;
    cin >> xm ;
    cin >> ym ;

    double R , xp , yp ;
    R = sqrt(pow(xm-xe,2) + pow(ym-ye,2)) ;
    xp = (((xm-xe)*(re-rp))/R)+xe;
    yp = (((ym-ye)*(re-rp))/R)+ye;
    cout<< round(xp) << " " << round(yp) ;
}*/

/*
#include <iostream>
using namespace std;
int main() {
 int h1,m1,s1, h2,m2,s2;
 cin >> h1 >> m1 >> s1;
 cin >> h2 >> m2 >> s2;
 int t1 = h1*60*60 + m1*60 + s1;
 int t2 = h2*60*60 + m2*60 + s2;
 
 int dh,dm,ds ,dt;
 ds = (t2 - t1) + 24*3600;
 dt = ds%(24*3600);
 

 dh = dt / (60*60);
 dt -= dh * 60*60;
 dm = dt / 60;
 dt -= dm*60;
 cout << dh << ':' << dm << ':' << dt;
}*/
/*
#include <iostream>
#include <iostream>
#include <string>
using namespace std;
int main() {
    string n ;
    cin >> n ;
    int x , y ;
    x = (13*(n[0]-'0'))+(12*(n[1]-'0'))+(11*((n[2]-'0'))+(10*(n[3]-'0'))+(9*(n[4]-'0'))+(8*(n[5]-'0'))+(7*(n[6]-'0'))+(6*(n[7]-'0'))+(5*(n[8]-'0'))+(4*(n[9]-'0'))+(3*(n[10]-'0'))+(2*(n[11]-'0')));
    y = (11-(x%11))%10 ;
    cout << n[0] << "-" << n.substr(1,4)<< "-"<< n.substr(5,5)<<"-"<< n.substr(10,2)<<"-"<< y;
}*/
/*
#include <iostream>
#include <iostream>
#include <string>
using namespace std;
int main() {
    string x ;
    cin >> x ;
    string D ,M ,Y ;
    D = x.substr(0,2) ;
    M = x.substr(3,2) ;
    Y = x.substr(6,4) ;
    string q = "JANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDEC" ; 
    string m ;
    int y ,d ;
    m = q.substr((3*stoi(M))-3,3);
    y = stoi(Y)-543 ;
    d = stoi(D) ;
    cout << m << " " << d << ", " << y ;
}*/
/*
#include<iostream>
#include <cmath>
using namespace std ;
int main()
{
    double x , y;
    cin >> x ;
    y = (pow(x,sqrt(log((x+1)*(x+1)))))/(10-x) ;
    cout << round(y*1e6)/1e6 ;
    
}*/
/*
#include<iostream>
#include <cmath>
#include <string>
using namespace std ;
long gcd(long a, long b) {
 if (b == 0) return a;
 return gcd(b, a%b);
}
int main()
{
    int a ;
    string b , c , z ;
    cin >> a >> b >> c ;
    z = b + c ;
    int lb, lc ;
    lb = b.length() ;
    lc = c.length() ;
    int x,y,x1,y1,z1,zi,bi;
    zi = stoi(z);
    bi = stoi(b);
    x = zi-bi ;
    y = pow(10,lc+lb) - pow(10,lb) ;
    x1 = x/gcd(x,y) ;
    y1 = y / gcd(x,y) ;
    z1 = (y1*a)+x1 ;
   cout << z1 << " / " << y1 ;
}*/