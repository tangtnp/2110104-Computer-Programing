#include <iostream>
#include <set>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    multiset<char> s;
    multiset<char> m;
//
    string x;
    getline(cin,x) ;
    istringstream iss(x);
    char token;
    
    while(iss << token) {
        token = tolower(token) ;
        s.insert(token) ;
    }
//
//
    string y;
    getline(cin,y) ;
    istringstream iss2(y);
    char token2;
    while(iss2 >> token2) {
        token2 = tolower(token2) ;
        m.insert(token2) ;
    }
//
    if(s==m){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    for (int e : s) cout << e << ' ';
 cout << endl;
 for (int e : m) cout << e << ' ';
    return 0 ;
}