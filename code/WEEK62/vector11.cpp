#include<iostream>
#include<vector>
using namespace std ;
int main(){
    int N,n ,c=0;
    cin >> N ;
    vector<int> v ;
    for(int i=0 ; i < N ; ++i){
        cin >> n;
        if (c%2==0){
            v.push_back(n);
        }else{v.insert(v.begin(),n);}
        c++;

    }
    while(true){
        cin >> n;
        if(n!=-1){
        if (c%2==0){
            v.push_back(n);
        }else{v.insert(v.begin(),n);}
        c++ ;}
        else {break;}
    }
    string ans ;
    for(int i=0;i<v.size();++i){
        ans += to_string(v[i]) ;
        ans += ", " ;
    }
    ans = ans.substr(0,ans.length()-2) ;
    cout <<"["<< ans <<"]" << endl;

}