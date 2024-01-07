#include<iostream>
#include<vector>
#include<tuple>
#include<cmath>
#include<algorithm>
using namespace std ;
int main(){
    vector<tuple<double,int,double,double>> point ;
    int n ;
    cin >> n ;
    double x , y;
    for(int i=0;i<n;++i){
        cin >> x >> y ;
        tuple<double,int,double,double> p = {sqrt(pow(x,2)+pow(y,2)),i+1,x,y};
        point.push_back(p) ;
    }
    sort(point.begin(),point.end());
    cout << "#" << get<1>(point[2]) <<": "<< "("<< get<2>(point[2]) << "," << get<3>(point[2]) <<")" << endl ;

}