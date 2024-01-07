/*#include <iostream>
#include <cmath>
using namespace std ;
int main () {
    //1
    int n ; cin >>  n ;
    double a[n] , b[n] ;
    //2
    for(int i=0;i<n;i++){
        cin >> a[i]; cin >> b[i];
           
        }
    //3
    string ans ; cin >> ans ;
    if (ans == "Zig-Zag"){
        double mn =0;
        for(int p=0,q=0;p%2==1 && q%2==0;p++,q++){
        mn = min(a[p],b[q],mn) ;
        cout << mn ;
        }
        double mx = 0 ;
        for(int p=0,q=0;p%2==0 && q%2==1;p++,q++)
        {mx = max(a[p],b[q],mx) ;
        cout << mx ;}
    }
    else{
        double mn =0;
        for(int p=0,q=0;p%2==0 && q%2==1;p++,q++){
        mn = min(a[p],b[q],mn) ;
        cout << mn ;
        }
        double mx = 0 ;
        for(int p=0,q=0;p%2==1 && q%2==0;p++,q++)
        {mx = max(a[p],b[q],mx) ;
        cout << mx ;}
    }
}
*/
#include <iostream>
using namespace std ;
int main(){
    int n ; cin >> n ;
    int red[n] ,blue[n];
    for (int i = 0;i<n;i++){
        if(i%2==0){cin >> red[i] >> blue[i];}
        else{cin >> blue[i] >> red[i];}
    }
    string com ;
    cin >> com ;
    if(com == "Zig-Zag"){
        double mn = red[0] ;
        for(int i=1;i<n;i++){
            if(mn > red[i]) mn = red[i] ;
        }
        double mx = blue[0] ;
        for(int i=1;i<n;i++){
            if(mx < blue[i]) mx = blue[i] ;
    }cout << mn << " " << mx ;
}else{
    for(int i=0;i<n ; i++)swap(red[i],blue[i]);
    double mn = red[0] ;
        for(int i=1;i<n;i++){
            if(mn > red[i]) mn = red[i] ;
        }
        double mx = blue[0] ;
        for(int i=1;i<n;i++){
            if(mx < blue[i]) mx = blue[i] ;
    }cout << mn << " " << mx ;
}
}