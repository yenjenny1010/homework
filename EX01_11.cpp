#include <iostream> 
using namespace std;
int main(){
    long population ;
    double initial_population= 312032486;
    for (int i=1;i<6;i++){
        population=initial_population+int(i*(365*24*60*60)/7)-int(i*(365*24*60*60)/13)+int(i*(365*24*60*60)/45);
        cout<<i<<"."<<population << endl;
    }
    return 0;
    
    }