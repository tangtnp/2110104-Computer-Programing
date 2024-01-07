#include <bits/stdc++.h>
using namespace std ;
int main(){
    map<string,vector<string>> m ;
    vector<string> seq ;
    string type , name ;
    while(cin>>name){
        cin >> type ;
        if(m.find(type)==m.end()){
            m[type] = vector<string>() ;
            seq.push_back(type);}
        m[type].push_back(name) ;
    }
    for(auto & type : seq){
        cout << type <<": " ;
        for(auto & a : m[type]) {
            cout << a << ' ' ;}
        cout << endl ;
    }
}