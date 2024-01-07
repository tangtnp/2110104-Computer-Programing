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
#include<iostream>
#include<string>
using namespace std;
int main(){
    string a,b;
    getline(cin,a);
    getline(cin,b);
    if(a.length() != b.length()){
        cout << "Incomplete answer";
    }else{
        int i = 0;
        int count = 0;
        while(i < a.length()){
            if(a[i]==b[i]){
                count++;
            }
            i++;
        }
        cout << count;     
    }
}
