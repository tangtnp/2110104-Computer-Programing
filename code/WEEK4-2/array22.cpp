#include <iostream>
#include <string>
using namespace std ;
int main(){
    int n ; cin >> n ;
    string C[n];
    for(int i=0;i<n;i++)cin>> C[i];
    cin.ignore() ;
    string op ;
    getline(cin,op);
    for(char c : op){
        if(c=='C'){
            for(int i=0,j=n/2;i<n/2;i++,j++){
                swap(C[i],C[j]);
                }
        }else if(c =='S'){
            string t[n];
            for(int i=0,j=n/2,k=0;i<n/2;i++,j++,k+=2) {
                t[k]= C[i] ;
                t[k+1] = C[j] ;
            }
            for(int i=0;i<n;i++){
                C[i]=t[i];
            }
        }
}for(int i=0;i<n;i++)cout << C[i] << ' ' ;
}