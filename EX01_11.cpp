//s0951034 顏禎誼
#include <iostream> 
using namespace std;
int main(){
    long population ;
    double initial_population= 312032486;
    for (int i=1;i<6;i++){
        population=initial_population+int(i*(365*24*60*60)/7)-int(i*(365*24*60*60)/13)+int(i*(365*24*60*60)/45);//計算總人口數
        cout<<i<<"."<<population << endl;//印出population
    }
    return 0;
    }
/*
心得:
原本population是用累加方式計算，但因population是用long儲存所以因此忽略小數部分，多年累加起來population便有誤差值，而後改正計算方式便得到正確答案。
學習到應小心設定變數型態
*/