#include <iostream>
#include <cmath>
using namespace std ;

/*int main(){
    int R , C ;
    cin >> R >> C ;
    double a[R][C] ;
    for(int r=0 ; r<R ; r++){
        for(int c=0 ; c<C ; c++){
            cin >> a[r][c] ;
        }
    }
    cout << a[3][2] ;
}
*/

int main(){
    int R,C ;
    cin >> R >> C ;
    double a[R*C] ;
    for(int i=0 ; i<R*C ; i++) cin >> a[i] ;
    double b[(R-2)*(C-2)] ;
    for(int i = 0;i<R-2;i++){
    int cnt=0 ;
    for(int j=i*C ; cnt<(C-2) ; j++){
        double x = (a[0+j]+a[1+j]+a[2+j]+
                    a[C+j]+a[C+1+j]+a[C+2+j]+
                    a[C+C+j]+a[C+C+1+j]+a[C+C+2+j])/9 ;
        cout << round(x*100)/100.0 << " ";
        cnt++;
    }
    cout << '\n';
    }
}
