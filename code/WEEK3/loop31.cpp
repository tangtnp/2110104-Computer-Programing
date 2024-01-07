//ยัง
#include <iostream>
#include <cmath>
using namespace std ;
int check(long double c){
    int num = log10(c*10) ;
    return num ;
}
int main(){
    long long int sum = 0;
    long long int x , y;
    cin >> x >> y ;
    //9*1+90*2+900*3+9000*4
    //part2
    if(x==0){
        sum += 1;
        x =1;
    }
    long long int diff1= (y-(long long)pow(10,check(y)-1)+1)*(check(y)) ;
    //part1
    int i = 0 ;
    long long int sum1=0 ;
    while(i<check(y)){
        sum1 += 9*pow(10,i-1)*(i);
        i++ ;
    
    //part0
    long long int diff2= (x-(long long)pow(10,check(x)-1)+1)*(check(x)) ;
    //part0.1
    int j = 0 ;
    long long int sum2=0 ;
    while(j<check(x)){
        sum2 += 9*pow(10,j-1)*(j);
        j++ ;
}  
sum += (diff1+sum1)-(diff2+sum2)+1 ;
cout << sum ;
}}