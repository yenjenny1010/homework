//s0951034 顏禎誼
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x, y, distance;
    cout<<"x=";
    cin >> x; 
    cout<<"y=";
    cin >> y; 
    distance = sqrt(pow(x, 2) + pow(y, 2)); //計算與原點距離
    if (distance < 10)//用if來判斷點是否在圓裡面
    { 
        cout << "Point (" << x << "," << y << ") is in the circle" << endl;
    }
    else if(distance==10)
        cout << "Point (" << x << "," << y << ") is on the circle" << endl;
    else
    {
        cout << "Point (" << x << "," << y << ") is not in the circle" << endl;
    }
    return 0;
}
/*心得
學習到sqrt與pow用法
因貪圖方便所以cin前不會加上提示字元，但反而會使使用者不知道要輸入甚麼，於是學習到要記得加上提示字元
除了題目要求外，加入distance==10的條件
*/