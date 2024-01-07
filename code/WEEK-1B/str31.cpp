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
}