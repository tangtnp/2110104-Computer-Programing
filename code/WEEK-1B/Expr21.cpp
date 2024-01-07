#include <iostream>
using namespace std;
int main() {
 int h1,m1,s1, h2,m2,s2;
 cin >> h1 >> m1 >> s1;
 cin >> h2 >> m2 >> s2;
 int t1 = h1*60*60 + m1*60 + s1;
 int t2 = h2*60*60 + m2*60 + s2;
 
 int dh,dm,ds ,dt;
 ds = (t2 - t1) + 24*3600;
 dt = ds%(24*3600);
 

 dh = dt / (60*60);
 dt -= dh * 60*60;
 dm = dt / 60;
 dt -= dm*60;
 cout << dh << ':' << dm << ':' << dt;
}