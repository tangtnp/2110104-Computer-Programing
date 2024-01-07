#include<iostream>
using namespace std;
int maxx(int x[],int start , int stop){
    int mx = x[start] ;
    for (int i = start+1 ; i<=stop ; i++){
        if (x[i]>mx) mx = x[i] ;
    }
    return mx ;
}

int main(){
    int n ; cin >> n ;
    int x[n];
    for(int i=0;i<n;i++){cin >> x[i];}
    int blue=0;
    for (int i=1;i<n-1;i++){
        int mxL = maxx(x , 0 , i);
        int mxR = maxx(x , i , n-1);
        blue += min(mxL,mxR) - x[i];
    }
    cout << blue ;
}