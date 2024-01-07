#include <iostream>
using namespace std ;
int min(int d[] , int n){
    double mn = d[0] ;
    for(int i=1;i<n;i++){
        if(mn > d[i]) mn = d[i] ;
}return mn ;
}
int max(int d[] , int n){
    double mx = d[0] ;
        for(int i=1;i<n;i++){
            if(mx < d[i]) mx = d[i] ;
}return mx ;
}

int main(){
    int n ; cin >> n ;
    int red[n] ,blue[n];
    for (int i = 0;i<n;i++){
        if(i%2==0){cin >> red[i] >> blue[i];}
        else{cin >> blue[i] >> red[i];}
    }
    string com ;
    cin >> com ;
    int mx , mn ;
    if(com == "Zig-Zag"){
        mn = min(red , n);
        mx = max(blue , n) ;
        cout << mn << " " << mx ;
    }
    else{
        int mn = min(blue , n);
        int mx = max(red , n) ;
        cout << mn << " " << mx ;
    }
}
