#include <iostream>
using namespace std ;
int main(){
    int n ;
    cin >> n ;
    string out ;
    int k = 2 ;
    while (k<=n){
        if(n%k == 0){
            out += to_string(k) + "*" ;
            n/=k ;
        }else{
            k++;
        }
    }
    cout << out.substr(0,out.length()-1) << endl;
}

