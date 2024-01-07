 #include <iostream>
 #include<vector>
 using namespace std ;
 int main(){
    int n ;
    vector<int> v ;
    cin >> n ;
    v.push_back(n) ;
    while(true){
        if(n!=1){

        if(n%2==0) n = n/2 ;
        else n = 3*n+1 ;

        v.push_back(n) ;

        }else{
            break;
        }
    }
    
    string ans ;

    if(v.size()<15){
    for(int i=0;i<v.size();++i){
        ans += to_string(v[i]) ;
        ans += "->" ;
    }}
    else{
        for(int i=v.size()-15;i<v.size();++i){
        ans += to_string(v[i]) ;
        ans += "->" ;
    }
    }
    ans = ans.substr(0,ans.length()-2) ;
    cout << ans ;
 }