#include<iostream>
using namespace std;
int main(){
    int n ; cin>>n;
    int m = n*n-1 ;
    int P[m] ;
    int x ,row;
    for(int i=0;i<m;){
        cin >> x ;
        if (x==0){
            row = i/n ;
        }else{
            P[i++] = x ;
        }
}

int inver = 0 ;
for(int i = 0 ; i<m ; i++){
    for(int j=i+1 ; j<m ;j++){
        if(P[i] > P[j]){
            inver++ ;
        }
    }
}
if(n%2==1 && inver%2==0 ||
    n%2==0 && inver%2==1 && row%2==0 ||
    n%2==2 && inver%2==0 && row==1)cout << "YES" ;
else cout << "NO" ;
}