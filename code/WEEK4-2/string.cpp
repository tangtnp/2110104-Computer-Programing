#include <iostream>
using namespace std ;
int main(){
    int n; cin >> n;
    string C[n];
    int F[n] ;
    for(int i=0 ; i<n ; i++){
        cin >> C[i] >> F[i] ;
    }
    string start ,ap ,ct ;
    cin >> start ;
    start = start.substr(4,2);
    int fee=0;
    while(cin >> ap){
        ct = ap.substr(4,2);
        if(ct != start){
            for(int i=0; i<n ; i++){
                if (ct==C[i]) {fee += F[i] ;
                break;}
            }
        }start = ct ;
}
cout << fee <<endl ;
}