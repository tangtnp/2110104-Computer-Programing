#include <iostream>
#include <cmath>

using namespace std;
int main () {

int d,m,y,n ; 
cin >>d>>m>>y; 
    
    n = 28;
    if (y%4==3) {
            n=29;
        }
    if (y > 2640){
        n = 28;
    }
    
    /*if (y%4==0 && y%100!=0) {
            n=29;
        }*/
    int x;
    if (m==12) { 
        x=31-d+1;}
    if (m==11) {
        x=30-d+1+31;}
    if (m==10) {
        x=31-d+1+30+31;}
    if (m==9) {
        x=30-d+1+31+30+31;}
    if (m==8) {
        x=31-d+1+30+31+30+31;}
    if (m==7) {
        x=31-d+1+31+30+31+30+31;}
    if (m==6) {
        x=30-d+1+31+31+30+31+30+31;}
    if (m==5) {
        x=31-d+1+30+31+31+30+31+30+31;}
    if (m==4) {
        x=30-d+1+31+30+31+31+30+31+30+31;} 
    if (m==3) {
        x=31-d+1+30+31+30+31+31+30+31+30+31;}    
    if (m==2) {
        x=n-d+1+31+30+31+30+31+31+30+31+30+31;}    
    if (m==1) {
        x=31-d+1+n+31+30+31+30+31+31+30+31+30+31;}    

    
int q,r,s,w,p; cin>>q>>r>>s;

w=(s-y-1)*365;

p = 28;
    if (s%4==3) {
            p=29;
        }
    if (s > 2640){
        p = 28;
    }
    
    /*if (s%4==0 && s%100!=0) {
            p=29;
        }*/
    int z;
    if (r==1) { 
        z=q;}
    if (r==2) {
        z=q+31;}
    if (r==3) {
        z=q+31+p;}
    if (r==4) {
        z=q+31+p+31;}
    if (r==5) {
        z=q+31+p+31+30;}
    if (r==6) {
        z=q+31+p+31+30+31;}
    if (r==7) {
        z=q+31+p+31+30+31+30;}
    if (r==8) {
        z=q+31+p+31+30+31+30+31;}
    if (r==9) {
        z=q+31+p+31+30+31+30+31+31;} 
    if (r==10) {
        z=q+31+p+31+30+31+30+31+31+30;}    
    if (r==11) {
        z=q+31+p+31+30+31+30+31+31+30+31;}    
    if (r==12) {
        z=q+31+p+31+30+31+30+31+31+30+31+30;}    

double t = x+w+z-1;
double h = sin((2*(M_PI)*t)/23);
double i = sin((2*(M_PI)*t)/28);
double j = sin((2*(M_PI)*t)/33);

cout<< t <<" "<< round(h*100.0)/100.0 <<" " << round(i*100.0)/100.0 <<" "<<round(j*100.0)/100.0 ;


}