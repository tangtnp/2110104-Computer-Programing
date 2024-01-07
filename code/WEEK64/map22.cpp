#include <bits/stdc++.h>
using namespace std ;
int main(){
    int n ;
    cin >> n ;
    map<string,double> m ;
    m["THB"] = 1 ;
    string coun ;
    double price ;
    while(n--){
        cin >> coun >> price ;
        m[coun] = price ;
    }
//
    double start ;
    cin >> start ;
    string ex;
    vector<string> x ;
    while(cin >> ex){
        x.push_back(ex) ;
    }
//
    vector<int> cal ;
    auto itr = x.begin()+1 ;
    int y = start ;
    for(;itr != x.end();){
        if(itr != x.end()-2){
            cal.push_back(y * m[*itr]/m[*(itr+1)]) ;
            y = y * m[*itr]/m[*(itr+1)] ;
        }
        else if(itr == x.end()-2){
            cal.push_back(y*m[*itr]) ;
        }
    }
    
//

}
