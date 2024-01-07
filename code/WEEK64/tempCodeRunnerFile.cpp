#include <bits/stdc++.h>
using namespace std ;
/*int main(){
    int n ;
    cin >> n;
    string id ;
    map<string,set<char>> m ;
    while(n--){
        cin >> id ;
        set<char> s;
        string x;
        cin.ignore();
        getline(cin,x) ;
        istringstream iss(x);
        char token;
        while(iss >> token) {
            s.insert(token) ;
        }
        s.erase('*') ;
        m[id] = s ;
    }
    //
    string key ;
    cin >> key ;
    for(auto e : m){
        for (auto q : e.second){
            if()
        }
    }
}*/
int main(){
    map<string,set<string>> location ;
    string id ,loc;
    int n ;
    cin >> n ;
    cin >> id ;
    vector<string> id_seq ;
    while(n--){
        cin >> id >> loc ;
        location[id] = {} ;
        id_seq.push_back(id) ;
        while(loc != "*"){
            location[id].insert(loc) ;
            cin >> loc ;
        }
    }
    cin >> id ;
    set<string> locs = location[id] ;
    vector<string> v ;
    location.erase(id) ;
    for(auto & sid : id_seq){
        auto x = location[sid] ;
        for(auto & u : x){
            if(locs.find(u) != locs.end()){
                v.push_back(sid);
                break ;
            }
        }
    }
if(v.size() != 0 ){
    for(auto e : v){cout << ">> " << e << endl ;}
}else{
    cout << ">> Not Found" << endl ;
}
}