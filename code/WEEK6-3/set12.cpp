#include <bits/stdc++.h>
using namespace std ;
int main(){
    int x;
    set<int> m ;
    bool t = false ;
    int cnt = 0 ;
    while(cin>>x){
        if(m.find(x)== m.end()){
            m.insert(x) ;
            cnt++ ;
        }else{
            t = true ;
            break ;
        }
    }
    if(t){
        cout << m.size()+1 << endl ;
    }else{
        cout << "-1" << endl;
    }


}