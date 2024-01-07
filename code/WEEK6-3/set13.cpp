#include <bits/stdc++.h>
using namespace std;
int main(){
    set<string> w ;
    set<string> l ;
    string win , lose ;
    while(cin >> win){
        w.insert(win) ;
        cin >> lose ;
        l.insert(lose) ;
    }
    set<string>result ;
    for(string W : w){
        if(l.find(W) == l.end()){
            result.insert(W) ;
        }
    }
    if(result.size()!=0){
        for(auto e : result){
            cout << e << " " ;
        }
    }else{
        cout << "None" ;
    }
    /*
    int cnt = 0 ;
    auto itr  = l.begin() ;
    for(auto e : w){
        for(auto x : l) {
            if(e != x){
                cnt++ ;
                if(cnt == l.size()){
                    cout << e << " " ;
                    cnt=0 ;
                    break ;
                }
            }else{
                break ;
            }
        } 
    }*/
    return 0 ;
}