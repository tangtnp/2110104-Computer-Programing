#include <iostream>
#include <string>
using namespace std ;
int main(){
    string A,N;
    while (cin>> A){
        cin >> N ;
        N = "000" + N ;
//N to int
        int n ;
        char a = A[A.length()-1] ;
        string ex = N.substr(N.length()-2,2) ;
        int num ; num = stoi(ex) ;
        int ans;
    if(num==0){ans = 1 ;}
    else{
        if (a=='0'){ans = 0;}
        else if(a=='1'){ans = 1;}
        else if(a=='2'){
            if(num%4==1){ans = 2 ;}
            if(num%4==2){ans = 4 ;}
            if(num%4==3){ans = 8 ;}
            if(num%4==0){ans = 6 ;}
        }
        else if(a=='3'){
            if(num%4==1){ans = 3 ;}
            if(num%4==2){ans = 9 ;}
            if(num%4==3){ans = 7 ;}
            if(num%4==0){ans = 1 ;}
        }
        else if(a=='4'){
            if(num%2==1){ans = 4 ;}
            if(num%2==0){ans = 6 ;}
        }
        else if(a=='5'){ans= 5;}
        else if(a=='6'){ans= 6;}
        else if(a=='7'){
            if(num%4==1){ans = 7 ;}
            if(num%4==2){ans = 9 ;}
            if(num%4==3){ans = 3 ;}
            if(num%4==0){ans = 1 ;}
        }
        else if(a=='8'){
            if(num%4==1){ans = 8 ;}
            if(num%4==2){ans = 4 ;}
            if(num%4==3){ans = 2 ;}
            if(num%4==0){ans = 6 ;}
        }
        else if(a=='9'){
            if(num%2==1){ans = 9 ;}
            if(num%2==0){ans = 1 ;}
        }
    }
        cout << ">> " << ans << endl ;

    }
    

}