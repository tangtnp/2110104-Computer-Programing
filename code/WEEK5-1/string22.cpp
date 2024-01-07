#include <iostream>
#include<string>
#include<cmath>
using namespace std ;
int main(){
    string x , y ;
    cin >> x >> y ;
    int lenx = x.length() ;
    int leny = y.length() ;
    int a[20] ;
    int mx = max(lenx,leny);

//1
for(int j=0;j<mx;j++){
    for(int num= 0;num<=j;num++){x = "-" + x ;}
    int count = 0 ;
    for(int i=0 ; i<mx+j; i++){
        if(x[i] == y[i]){count++;}
    }
    a[j]=count ;
}
int z = 0 ;
for(int i=0 ; i<20 ; i++){
    z = max(z,a[i]) ;
    }

cout << x << endl ;
cout << y << endl ;
cout << z ;
}