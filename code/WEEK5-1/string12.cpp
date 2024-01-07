#include <iostream>
using namespace std ;
string sum(string x, string y){
    int lenx = x.length() ;
    int leny = y.length() ;
    int diff = max(lenx,leny)-min(lenx,leny) ;
    if(min(lenx,leny)==lenx){
        for(int i=0;i<diff;i++){
            x = "0" + x ;
        }
    }else if(min(lenx,leny)==leny){
        for(int i=0;i<diff;i++){
            y = "0" + y ;
        }
    }
    string s ;
    int c ;
    for(int i =max(lenx,leny)-1;i>=0;i--){
        int ans = (x[i]-'0') +(y[i]-'0') + c;
        s = (char)(ans%10 + '0') +s ;
        c = ans/10 ;
    }
    if(c>0) s=(char)(c+'0') + s ;
    return s ;
}
int main(){
    string x ;
    string y ;
    cin >> x ;
    for(;cin >> y;){
        if(y!="END"){
            x = sum(x,y) ;
        }else {break ;}   
    }
    cout << x << endl ;
}