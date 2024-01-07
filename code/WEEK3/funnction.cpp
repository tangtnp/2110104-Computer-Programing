#include <iostream>
using namespace std;
int to_sec(int h, int m, int s) {
    int sum = 3600*h + 60*m +s ; //1 49 40
    return sum; 
}
int diff(int h1, int m1, int s1, int h2, int m2, int s2) {
// return the difference in seconds
// between h1:m1:s1 and h2:m2:s2
// try to solve this by calling to_sec
 // fill the code here
    return abs(to_sec(h1,m1,s1)-to_sec(h2,m2,s2)) ;
}
int main() {
    int h1,m1,s1, h2,m2,s2;
    cin >> h1 >> m1 >> s1;
    cin >> h2 >> m2 >> s2;
    cout << diff(h1, m1, s1, h2, m2, s2) << endl;
}
