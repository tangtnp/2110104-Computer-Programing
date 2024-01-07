#include<iostream>
using namespace std ;
int main(){
    string x ; cin >> x ;
    int n ; cin >> n ;
    int N = ((x[0]-'0')*26*26 +
              (x[1]-'A')*26 +
              (x[2]-'A'))*1000 +
              stoi(x.substr(4,3)) ;
    N +=n ;
    string y = "00" + to_string(N%1000) ;
    string out = "-" + y.substr(y.length()-3) ;
    N /=1000 ;
    out = (char)(N%26 + 'A') + out;
    N /=26 ;
    out = (char)(N%26 + 'A') + out;
    N /=26 ;
    out = (char)(N + '0') +out;
    
    cout << out << endl ;
}