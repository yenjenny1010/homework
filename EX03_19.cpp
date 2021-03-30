#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x,y,distance;
    cin>>x>>y;
    distance=sqrt(pow(x,2)+pow(y,2));
    if(distance<10){
    cout<<"Point (" <<x<<","<<y<< ") is in the circle"<<endl;} 
    else{
       cout<<"Point (" <<x<<","<<y<< ") is not in the circle"<<endl; 
    }
    return 0;
}
