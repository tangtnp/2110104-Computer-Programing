#include <iostream>
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
}