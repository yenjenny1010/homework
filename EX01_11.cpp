#include <iostream> 
#include <cmath>
using namespace std;
int main(){
    double population = 312032486;
    for (int i=1;i<6;i++){
        population=population+(365*24*60*60)/(7*i);
        population=population+(365*24*60*60)/(45*i);
        population=population-(365*24*60*60)/(13*i);
        cout<<i<<"."<<population << endl;
    return 0;
    }
    }