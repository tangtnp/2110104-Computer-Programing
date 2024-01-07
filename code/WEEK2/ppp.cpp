//11
/*
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int i = 0 ;
    double a , sum = 0;
    cin >> a ;
    if(a == -1){
        cout << "No Data" ;
    }else{
        while( a != -1){
            sum += a ;
            cin >> a ;
            i++ ;

        }

cout<< round((sum/i)*100)/100;}

}
*/
//13
/*
#include <iostream>
#include <string>
using namespace std ;
int main() {
    string f , i ;
    cin >> f ;
    cin >> i ;
    while(){
    i.find(f);
    }   
}
*/
/*#include <iostream>
using namespace std;
int main() {
string s,s2;
char c;
cout << "Enter a string: "; cin >> s;
cout << "Enter a char: "; cin >> s2;
c = s2[0];
int i = 0, pos;
bool found = false;
while (i < s.length()) {
if (s[i] == c) {
found = true;
pos = i;
}
i++;
}
if (found) {
cout << "Found " << c << " at position "
 << pos << endl;
} else {
cout << "Not found" << endl;
}
}*/
/*
#include<iostream>
#include<string>
using namespace std ;
int main(){
    string a ;
    cin >> a ;
    int count = 0 ;
    for (int i = 0; i< a.length() ; i++){
        while(a[i]==a[i+1]){
            count++ ;
        }
        cout << a[i] << " " << count << endl ;
        count = 0 ;
    }

}
*/
#include<iostream>

using namespace std ;
int main(){
    string s = "Somchai" ;
    int x = s[0] ;
    cout << x ;

}