#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int n ; cin >> n ;
    int x1[n] , y1[n] , x2[n] ,y2[n];
    for(int i=0;i<n;i++){
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i] ;    
    }
    int maxa =0 ;
    int ov[n*n];
    int c=0 ;
    for(int i=0;i<n;i++){
        for (int j=i+1 ; j<n ; j++){
            int W = max(0,min(x2[i],x2[j])-max(x1[i],x1[j])) ;
            int H = max(0,min(y2[i],y2[j])-max(y1[i],y1[j])) ;
            int area = W*H ;
            if(area > maxa ){
                maxa = area ;
                ov[0]=i ;
                ov[1]=j ;
                c=1;
            }else if(area == maxa){
                ov[c*2]=i ;
                ov[(c*2)+1]=j ;
                c++;
            }

        }
    }
    if(maxa !=0){
        cout << "Max overlapping area = " << maxa << endl ;
        for(int i=0 ; i<c ; i++){
            cout << "rectangles " << ov[i*2] << " and " << ov[i*2+1] << endl;
        }
    }else{
         cout << "No overlaps" << endl ;
    }

}
