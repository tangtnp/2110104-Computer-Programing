#include <iostream>
#include<string>
using namespace std ;

int main(){
//array
    const int n=10 ;
    char a[n] = {'0','1','2','3','4','5','6','7','8','9'};

//check
    string x ;
    getline(cin,x) ;
    int lenx = x.length() ;
    string ans = "" ;
    for(int j=0 ; j<n ; j++){
        int cnt = 0;
        for(int i=0 ; i<lenx;i++){
            if(a[j] == x[i] ){
                cnt++;
            }
        }

        if(cnt == 0) ans = ans + a[j] + "," ; 
    }
    if(ans.length()==0){cout << "None";}
    else cout << ans.substr(0,ans.length()-1) ;
}