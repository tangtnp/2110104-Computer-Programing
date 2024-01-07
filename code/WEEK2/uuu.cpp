/*#include <iostream>
#include <string>
using namespace std ;
int main() {
    string line ;
    getline(cin,line);
    int round = stoi(line) ;
    for (int i = 0; i < round;i++){
       string sequence;
       getline(cin,sequence) ;

       //R YR K Y N G
       //cout << "round" << i << "i got" ;
       for (int pos; pos < sequence.length();pos+=2)

       if(condition==0){
            if (sequence[pos] != 'R'){
                correct=false ;
                break ;
            }
            if(sequence[pos]=='Y')score +=2 ;

       }

    }
        
    
}
*/
#include<iostream>
#include<string>
using namespace std ;
int main(){
    string a ;
    cin >> a ;
    int i = 0 ;
    while(i<=a.length()){
        if (a[i]!=a[i+1]){
            cout << i ;
        }
    i++ ;}
}
