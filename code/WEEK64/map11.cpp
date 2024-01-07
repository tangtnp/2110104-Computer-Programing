#include <bits/stdc++.h>
using namespace std ;
int main(){
    int N ;
    cin >> N ;
    string first , sur ;
    map<string,string> m ;
    for(int i=0 ; i<N ; i++){
        cin >> first >> sur ;
        m[first] = sur ;
    }
    int n; 
    cin >> n ;
    vector<string> x  ;
    string h ;
    for(int i=0 ; i<n ; ++i){
        cin >> h ;
        x.push_back(h) ;
    }

    for(int i = 0 ; i<n ; ++i){
        bool found = false ;
        for(auto itr = m.begin() ; itr != m.end() ; itr++){
            if(x[i]==(*itr).first){
                cout << (*itr).second << endl ;
                found = true ;
                break ;
            }else if(x[i] == (*itr).second){
                cout << (*itr).first << endl ;
                found =true ;
                break ;
            }
        }
        if(found == 0){cout << "Not found" << endl ;}}

        return 0 ;
    }
    

