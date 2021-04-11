//s0951034 顏禎誼
#include <iostream>
using namespace std;
int main(){
    float v0,v1,t;
    cout<<"v0,v1,t(seperate by spaces)";
    cin>>v0>>v1>>t;//設定輸入值，輸入值以空格分開
    float a=(v1-v0)/t;//計算加速度值
    cout<<"The average acceleration is "<<a<<endl;//輸出acceleration
return 0;
}
/*心得
因不熟悉語法的使用方式，所以剛開始輸入時以為和PY一樣是以逗號區隔，但後來才發現是以空白建區隔。
學習到cin同時輸入多個值的使用方式。
*/
