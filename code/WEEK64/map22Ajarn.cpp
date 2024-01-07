#include <bits/stdc++.h>
using namespace std ;
int main(){
    map<string,double> rate ;
    int n ;
    cin >> n ;
    string cur ;
    double r ;
    while(n--){
        cin >> cur >> r ;
        rate[cur]=r ;
    }
    rate["THB"] = 1 ;
    int s ;
    cin >> s >> cur ;
    cout << s << " " << cur ;
    string next_cur ;
    while(cin >> next_cur){
        s = (int)(s * rate[cur] / rate[next_cur]) ;
        cur = next_cur ;
        cout << " -> " << s << " " << cur ;
    }
}