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
    double num , total =0;
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
    auto p = *(v.end()-1) ;

    if(total == 0){
        cout << "No ice cream sales" << endl ;
    }else{
        cout << "Total ice cream sales: " << total << endl;
        cout << "Top sales: " << p.second << endl ;
    }


}