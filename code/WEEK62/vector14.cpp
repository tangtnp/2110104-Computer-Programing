#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
int main(){
    string line ;
    getline(cin,line) ;
    line = line + " " ;
    vector<int> num ;
    int cnt = 0 ;


    for(int i=0; i<line.length() ; ++i){
        if(line[i] == ' '){
            num.push_back(stoi(line.substr(i-cnt,cnt))) ;
            cnt = 0 ;
        }else ++cnt ;
    }
    /*
    for(int i=0; i<num.size() ; ++i) {
        cout << num[i] << " " ;
    }*/

    /*
    vector<string>ans ;
    
    ans.push_back(num[0]) ;

    for(int i=1 ; i<num.size() ; ++i ){
        if(find(ans.begin(),ans.end(),num[i]) == num.end()){
            ans.push_back(num[i]) ;
        }
    }
    sort(ans.begin(),ans.end()) ;
    cout << ans.size() << endl ;
    for(int i=0; i<10 ; ++i) {
        cout << ans[i] << " " ;
    }
    */
   vector <int> ans ;
   sort(num.begin(),num.end()) ;
   ans.push_back(num[0]) ;
   for(int i=1 ; i<num.size() ; ++i){
        if(num[i] != ans[ans.size()-1]){
            ans.push_back(num[i]);
        }
   }
   cout << ans.size() << endl ;
    for(int i=0; i<10 ; ++i) {
        cout << ans[i] << " " ;
    }

}