#include <iostream>
#include <iomanip>
using namespace std ;
int main(){
    int Num ; cin >> Num ;
    int a[Num];
    for (int i=0 ; i<Num ; i++){
        cin >> a[i] ;
    }
    for (int i=0 ; i<Num ; i++ ){
        double ans = a[i] ;
        for (int j = i-1 ; j >=0 ; j-- ){
            ans = a[j] + 1/ans ;
        }
    cout << setprecision(10) << ans << endl ;
    }

}