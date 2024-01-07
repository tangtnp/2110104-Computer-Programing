#include <bits/stdc++.h>
using namespace std;
set<int> uni(set<int> &s1 , set<int> &s2){
    set<int> s(s1);
    for(auto e : s2){
        s.insert(e) ;
    }
    return s ;   
}
set<int> intersection(set<int> &s1, set<int> &s2) {
    set<int> s;
    for (auto e : s1) {
        if (s2.find(e) != s2.end())
        s.insert(e);
    }  
 return s;
}
set<int> diff(set<int> &s1, set<int> &s2) {
    set<int> s;
    for (auto e : s1) {
        if (s2.find(e) != s2.end())
        s.erase(e);
    }  
 return s;
}
int main(){
//insert
    string x ;
    int i=0;
    int j=0;
    vector<set<int>> t ;
    while(getline(cin,x)){
        set<int> u ;
        for(;i<x.length();){
            if(x[i]!=' '){
                ++i;
            }else{
                u.insert(stoi(x.substr(j,i-j-1)));
                ++i;
                j=i;
            }
       }
        t.push_back(u) ;
    }                                        
//sort
//union
    
    for(auto v : t ){
            set<int> x (uni(x , v)) ;
        }
//intersection
     for(auto v : t ){
            set<int> y (intersection(y , v)) ;
        }
//different
         set<int> m ={} ;
     for(auto v : t ){
            set<int> z (intersection(z , v)) ;

        }
}