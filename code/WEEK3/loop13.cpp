#include<iostream>
#include<string>
using namespace std;
int main(){
    string word , sentence ;
    getline(cin,word);
    getline(cin,sentence);
    int c = 0 ;
    while(true){
        int num = sentence.find(word);
        int num2 = num+ word.length() ;
        if(num != -1){
        if(num!=sentence.length()){
        if (sentence[num- 1 ] == ' ' || sentence[num- 1 ] == '"' || sentence[num- 1 ] == '(' || sentence[num- 1 ] == ')' || sentence[num- 1 ] == ',' || sentence[num- 1 ] == '.' || sentence[num- 1 ] == 39 ){
                if(sentence[num2] == ' ' || sentence[num2 ] == '"' || sentence[num2] == '(' || sentence[num2 ] == ')' || sentence[num2 ] == ',' || sentence[num2 ] == '.' || sentence[num2] == 39){{
                c++ ;
            }
        }
        sentence[num] = word[0]+1; 
        } }
        else {break;}
    }cout << c ;
}}



//lower = char | 0x20 ; // 41-->61

/*#include <iostream>
#include <string>
using namespace std;
int main(){
    string sentence, word; 
    getline(cin,word);
    int l = word.length();
    getline(cin,sentence);
    int c = 0;
    string sen;
    sen = " " + sentence + " ";
    while(true){
        int index = sen.find(word);
        if (index != -1){
            if (sen[index- 1 ] == ' ' || sen[index- 1 ] == '"' || sen[index- 1 ] == '(' || sen[index- 1 ] == ')' || sen[index- 1 ] == ',' || sen[index- 1 ] == '.' || sen[index- 1 ] == 39 ){
                if(sen[index+l ] == ' ' || sen[index+l ] == '"' || sen[index+l ] == '(' || sen[index+l ] == ')' || sen[index+l ] == ',' || sen[index+l ] == '.' || sen[index+l ] == 39 || (index + l == sen.size())){
                    c++;
                
                }
                
            }
            sen[index] = word[0]+1;
        }
        if (index == -1) {break;}
    }
    cout << c;
}
*/
/*

#include <iostream>
#include <string>
using namespace std;
int main(){
    string sentence, word; 
    getline(cin,word);
    int l = word.length();
    getline(cin,sentence);
    int c = 0;
    string sen;
    sen = " " + sentence + " ";
    while(true){
        int index = sen.find(word);
        if (index != -1){
            if (sen[index- 1 ] == ' ' || sen[index- 1 ] == '"' || sen[index- 1 ] == '(' || sen[index- 1 ] == ')' || sen[index- 1 ] == ',' || sen[index- 1 ] == '.' || sen[index- 1 ] == 39 ){
                if(sen[index+l ] == ' ' || sen[index+l ] == '"' || sen[index+l ] == '(' || sen[index+l ] == ')' || sen[index+l ] == ',' || sen[index+l ] == '.' || sen[index+l ] == 39){
                    c++;
                
                }
                
            }
            sen[index] = word[0]+1;
        }
        else {break;}
    }
    cout << c;
}
*/