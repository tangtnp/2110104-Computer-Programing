#include <iostream>
using namespace std;
int main()
{
    const int n = 10;
    string name[n] = {"Robert", "William", "James", "John", "Margaret", "Edward", "Sarah", "Andrew", "Anthony", "Deborah"};
    string nick[n] = {"Dick", "Bill", "Jim", "Jack", "Peggy", "Ed", "Sally", "Andy", "Tony", "Debbie"};
    int num;cin >> num ;
    for (int i = 0; i < num ; i++){
        string input; cin >> input;
        string ans ;
        for (int i = 0; i < n; i++){
            if (name[i] == input)
                ans = nick[i];
            else if(nick[i] == input)
                ans = name[i];
        }
    if(ans.length()==0) cout << "Not found" ;
    else cout << ans ;
    }
}
