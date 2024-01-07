#include <iostream>
using namespace std;
int main()
{
    string t; getline(cin,t);
    t +='\n';
    int k;cin >> k;
    int cnt = 1 , n=1 ;
    string ans = "";
    for(; n<t.length() ;++n){
        if(t[n]==t[n-1]){
            ++cnt;
        }else{
            if(cnt<k){
                ans = ans+ string(cnt,t[n-1]);
            }cnt=1;
        }
    }

cout<< ans <<endl;
}
