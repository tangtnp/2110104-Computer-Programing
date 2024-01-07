#include <iostream>
#include <vector>
#include <utility>
#include <sstream>
#include <algorithm>
using namespace std ;
int main(){
    string c ;
    double p ;
    vector<pair<double,pair<string , double>>> t ;
        while(cin >> c ){
            if(c == "END") break ;
            cin >> p ;
            t.push_back(make_pair(0,make_pair(c,p))) ;
        }
    cin.ignore() ;
    string x;
    getline(cin,x) ;
    istringstream iss(x);
    string token;
    vector<string> y ;
    while(iss >> token) {
        y.push_back(token) ;
    }
    for(int i=0 ; i<y.size() ; ++i){
        for(int j=0 ; j <t.size() ; ++j){
            if(y[i] == t[j].second.first){
                t[j].first -= t[j].second.second ;
                break ;
            }
        }
    }
    sort(t.begin(),t.end());
    for (int i = 0; i < 3; ++i) {
        if (t[0].first == 0) {
            cout << "No Sales" << endl;
            break ;
        }
        if (t[i].first != 0) {
            cout << t[i].second.first << ' ' << -(t[i].first) << endl;
        }
    }
    return 0 ;
}