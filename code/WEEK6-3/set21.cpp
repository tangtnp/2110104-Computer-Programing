#include <bits/stdc++.h>
using namespace std ;
int main(){
    int k ,i,cnt=0;
    cin >> k ;
    set<int> x ;
    while(cin >> i){
        if(x.find(k-i) != x.end()){
            cnt +=1 ;
        }
        x.insert(i);
    }
    cout << cnt << endl;
}