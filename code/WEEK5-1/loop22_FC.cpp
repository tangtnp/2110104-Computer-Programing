#include <iostream>
using namespace std ;
int main(){
    int n,k ; cin >> n >> k ;
    if(n%2==1){
        int sum_a =0,sum_b=0,sum_c=0,m=0;
        for (;m<k;){
            int a,b,c ;
            cin >> a >> b >> c ;
            if(a==b){
                if(a==c){
                    if(a+b >k){
                        sum_a+=1;
                        sum_b+=2;
                        sum_c-=3;
                        m++;
                    }else{
                        sum_a-=3;
                        sum_b-=2;
                        sum_c+=1;
                        m++ ;
                    }
                }else{
                    sum_a+=2;
                    sum_b-=3;
                    m++;
                }

            }else{m++;}
        }
    {cout << sum_a << " " << sum_b << " " << sum_c << endl;}
    }else {
        int s,t ;
        cin >> s >> t ;
        int x=s ;
        int y=t ;
        if(s>t){
            x=s-t ;
        }else{
            if(s<t){
                y=2*(t-s);
            }
        }
        if(x+y >k){
            swap(x,y);
            x=y+s*s ;
        }
        cout << x << " " << y << endl;
    }
}