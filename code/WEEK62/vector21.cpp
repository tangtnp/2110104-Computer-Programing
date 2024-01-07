#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
int main(){
    string line ;
    cin >> line ;
//1
    line += '$';
    const int len = line.length()-1;
//2
    vector<string> b ;
    b.push_back(line) ;
    for(int i=1 ; i<line.length() ; ++i){
        line = line[line.size()-1] + line.substr(0, line.size()-1);
        b.push_back(line) ;
    }
    sort(b.begin(),b.end());
    string ans ;
    for(int i=0 ; i<b.size() ; ++i){
        ans += b[i].substr(len,1) ;
    }
    cout << ans << endl ;
}