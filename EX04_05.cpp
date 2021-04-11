//s0951034 顏禎誼
#include <iostream>
#include <cmath> //因有使用到數學的三角函數運算所以需#include <cmath>
using namespace std;
double area(double number_of_sides, double side) //此函式用來計算area的值
{
    double area;
    area = number_of_sides * pow(side, 2) / (4 * tan(M_PI / number_of_sides));
    return area;
}
int main()
{
    double number_of_sides, side;
    cout << "input number_of_sides:";
    cin >> number_of_sides; //輸入number_of_sides的值
    cout << "input side:";
    cin >> side;                         //輸入side的值
    cout << area(number_of_sides, side); //輸出area
    return 0;
}
/*心得:
學習到#include <cmath>並學習如何使用三角函數的運算
學習到CPP的cout盡量使用英文輸出否則會有編譯問題
*/