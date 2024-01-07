/*#include <iostream>
#include <cmath>
#include <string>
using namespace std ;
int main() {
    string rahas_1 ,rahas_2 ; 
    char comp_1,cal1_1 ,cal2_1 ,comp_2,cal1_2 ,cal2_2 ;
    double grade_1 ,grade_2 ;
    cin >> rahas_1 >>  grade_1 >> comp_1 >> cal1_1 >> cal2_1 >> rahas_2>>  grade_2 >> comp_2 >> cal1_2 >> cal2_2 ;
    

bool condition1 = comp_1 == 'A' && cal1_1 <= 'C' && cal2_1 <= 'C';
bool condition2 = comp_2 == 'A' && cal1_2 <= 'C' && cal2_2 <= 'C';

if (condition1 && condition2)
{
    if (grade_1 > grade_2) {
        cout<< rahas_1 ;
    }else if (grade_1 < grade_2){
        cout << rahas_2 ;
    }else{
        if(cal1_1 < cal1_2){
            cout << rahas_1 ;
        }else if(cal1_1 > cal1_2){
            cout << rahas_2 ;
        }else{
            if(cal2_1 < cal2_2){
            cout << rahas_1 ;
        }else if(cal2_1 > cal2_2){
            cout << rahas_2 ;
        }else{cout<< "Both" ;
        }
    }}} else if (condition1 == 0 && condition2==1){
        cout << rahas_2 ;
    } else if(condition1==1 && condition2 == 0){
        cout << rahas_1 ;
    }else{
        cout << "None" ;
    }
}
*/


/*
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    string rahas_1, rahas_2;
    char comp_1, cal1_1, cal2_1, comp_2, cal1_2, cal2_2;
    double grade_1, grade_2;

    cin >> rahas_1 >> grade_1 >> comp_1 >> cal1_1 >> cal2_1;
    cin >> rahas_2 >> grade_2 >> comp_2 >> cal1_2 >> cal2_2;

    bool condition1 = comp_1 == 'A' && cal1_1 <= 'C' && cal2_1 <= 'C';
    bool condition2 = comp_2 == 'A' && cal1_2 <= 'C' && cal2_2 <= 'C';

    if (condition1 && condition2) {
        if (grade_1 > grade_2) {
            cout << rahas_1;
        } else if (grade_1 < grade_2) {
            cout << rahas_2;
        } else {
            if (cal1_1 < cal1_2) {
                cout << rahas_1;
            } else if (cal1_1 > cal1_2) {
                cout << rahas_2;
            } else {
                if (cal2_1 < cal2_2) {
                    cout << rahas_1;
                } else if (cal2_1 > cal2_2) {
                    cout << rahas_2;
                } else {
                    cout << "Both";
                }
            }
        }
    } else if (!condition1 && condition2) {
        cout << rahas_2;
    } else if (condition1 && !condition2) {
        cout << rahas_1;
    } else {
        cout << "None";
    }

}
*/
/*#include <iostream>
#include <cmath>
#include <string>
using namespace std ;
int main() {
    string rahas_1,rahas_2;
    char comp_1,cal1_1 ,cal2_1,comp_2,cal1_2 ,cal2_2 ;
    double grade_1,grade_2 ;
    cin >> rahas_1 >>  grade_1 >> comp_1 >> cal1_1 >> cal2_1 >> rahas_2 >>  grade_2 >> comp_2 >> cal1_2 >> cal2_2;

bool condition1 = comp_1 == 'A' && cal1_1 <= 'C' && cal2_1 <= 'C';
bool condition2 = comp_2 == 'A' && cal1_2 <= 'C' && cal2_2 <= 'C';
if (condition1 && condition2)
{
    if (grade_1 > grade_2) {
        cout<< rahas_1 ;
    }else if (grade_1 > grade_2){
        cout << rahas_2 ;
    }else{
        if(cal1_1 < cal1_2){
            cout << rahas_1 ;
        }else if(cal1_1 > cal1_2){
            cout << rahas_2 ;
        }else{
            if(cal2_1 < cal2_2){
            cout << rahas_1 ;
        }else if(cal2_1 > cal2_2){
            cout << rahas_2 ;
        }else{cout<< "Both" ;
        }
    }}} else if (condition1 == 0 && condition2 == 1 ){
        cout << rahas_2 ;
    } else if(condition1 == 1 && condition2 == 0 ){
        cout << rahas_1 ;
    }else{
        cout << "None" ;
    }
}*/
/*
#include <iostream>
#include <string>
using namespace std ;
int main(){
    string phone ;
    cin >> phone ;
    bool condition = phone.substr(0,2)== "06" || phone.substr(0,2)== "08"||phone.substr(0,2)== "09" ;
    if (phone.length() == 10 && condition){
        cout << "Mobile number" ;
    }else{cout << "Not a mobile number" ;}
    } 
    */
/*
#include <iostream>
#include <cmath>
using namespace std ;
int main(){
    int w ;
    cin >> w ;
    if(w>0 && w<=100){cout << 18;}
    else if(w>100 && w<=250){cout << 22;}
    else if(w>250 && w<=500){cout << 28;}
    else if(w>500 && w<=1000){cout << 38;}
    else if(w>1000 && w<=2000){cout << 58;}
    else{cout<<"Reject" ;}
}*/

/*#include <iostream>
#include <cmath>
using namespace std ;
int main(){
    int a, b,c,d ;
    cin >> a >> b >> c >> d ;
    int x=a;
    if(a>b){
        a=b;b=x;
        if(d>=a){
            if(c>d){c=c-a;}
        }else{c = c+a;}
        b=a+c+d ;
    }else{
        if (c>a && a>=b){
            d = d+a;
        }
            if(d>c){
            b = b+2 ;
        }else {b= 2*b ;}}
        cout <<  a <<" "<< b <<" "<< c << " "<< d ;}*/

/*
#include <iostream>
#include <cmath>
using namespace std ;
int main () {
    int d ,m,Y ;
    cin >> d >> m >> Y ;
    int n ,y ;
    y = Y-543;
    if(y%400 == 0 || y%4==0 && y%100 != 0){ n= 29 ;
    }else{n=28;}
    
    if(m==1){cout<< d;}
    else if (m==2){cout << 31 + d ;}
    else if (m==3){cout << 31 + n + d ;}
    else if (m==4){cout << 31 + n + 31 + d ;}
    else if (m==5){cout << 31 + n + 31 + 30 + d ;}
    else if (m==6){cout << 31 + n + 31 + 30 +31+ d ;}
    else if (m==7){cout << 31*3 + 30*2 + n + d ;}
    else if (m==8){cout << 31*4 + 30*2 + n + d ;}
    else if (m==9){cout << 31*5 + 30*2 + n + d ;}
    else if (m==10){cout << 31*5 + 30*3 + n + d ;}
    else if (m==11){cout << 31*6 + 30*3 + n + d ;}
    else{cout << 31*6 + 30*4 + n + d ;}
}*/
/*#include <iostream>
using namespace std;
int main(){
    int score ;
    cin >> score ;
    string status ;
    status = (score>=50)? "Pass exam" : "Not pass" ;
    cout << status ;
}*/