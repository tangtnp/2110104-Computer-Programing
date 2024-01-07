#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n ;
    map<string,double> price ;
    string ice ;
    double s ;
    while(n--){
        cin >> ice >> s ;
        price[ice] = s ;
    }
//
    int N ;
    cin >> N ;
    map<string,double> m ;
    string want ;
    double num = 0 , total =0;
    while(N--){
        cin >> want >> num ;
        if(price.find(want)!=price.end()){
            total += price[want]*num ;
            m[want] += price[want]*num ;
        } 
    }
//
    vector<pair<int,string>> v ;
    for(auto & p : m ){
        v.push_back({p.second , p.first}) ;
    }
    sort(v.begin(),v.end()) ;
    auto itr = v.end() ;
    auto itr2 = --itr ;
    set<string> x ;
    for(int i=0 ; i<v.size() ; ++i){
        auto p = *(--itr) ;
        auto k = *(--itr2) ;
        if(p.first = k.first){
            x.insert(p.second) ;
            x.insert(k.second) ;
        }else{
            break ;
        }

    }

    if(total == 0){
        cout << "No ice cream sales" << endl ;
    }else{
        cout << "Total ice cream sales: " << total << endl;
        cout << "Top sales: " ;
        for(auto e : x){
            cout << e << " " ;
        }
    }


}