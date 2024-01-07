#include <iostream>
#include <vector>
using namespace std;
vector<string> split(string line, char delimiter) {
    vector<string> ans ;
    string temp;
    line = line+delimiter; 
    for(int i=0;i<line.length();++i){
        if(line[i] != delimiter){
            temp += line[i];
        } else if(temp != ""){
            ans.push_back(temp);
            temp = "";
        }
    }
    return ans ;    
}

       
int main() {
 string line;
 getline(cin, line);
 string delim;
 getline(cin, delim);
 for (string e : split(line, delim[0])) {
 cout << '(' << e << ')';
 }
}
