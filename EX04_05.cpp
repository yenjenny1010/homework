#include <iostream>
#include <cmath>
using namespace std; 
int area(double number_of_sides,double side)
{
    double area;
    area=number_of_sides*pow(side,2)/(4*tan(M_PI/number_of_sides));
    return area;

}  
int main(){
    double number_of_sides,side;
    cin>>number_of_sides;
    cin>>side;
    cout<<area(number_of_sides,side);
    return 0;

}