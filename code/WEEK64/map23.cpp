#include <bits/stdc++.h>
using namespace std ;
int main(){
    string name_song,name , type ,time;
    map<string,int> m ;
    int tim ;
    while(cin >> name_song >> name >> type >> time){
        int k = time.find(":") ;
        int tim = 60*(stoi(time.substr(0,k)))+stoi(time.substr(k+1));
        if(m.find(type)==m.end()) m[type]=0 ;
        m[type] += tim ;
    }
    vector<pair<int,string>> s ;
    for(auto & p : m ){
        s.push_back({p.second , p.first}) ;
    }
    sort(s.begin(),s.end()) ;
    auto itr = s.end() ;
    for(int i=0; i<min(3,(int)(s.size())) ;++i){
        auto p = *(--itr) ;
        int m = p.first/60 ;
        int s = p.first%60 ;
        cout << p.second << " --> " << m << ":" << s <<endl ;

        
    }
}