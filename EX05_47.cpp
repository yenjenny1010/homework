//s0951034 顏禎誼
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
  double number = 10; 
  double numbervalue = 0;
  double totalsum = 0; 
  double totalquadraticsum = 0; 
 
  cout << "Enter ten numbervalues: ";
  for (int i = 0; i < number; i++) {
    cin >> numbervalue;
    totalsum += numbervalue;//儲存各個數相加
    totalquadraticsum += pow(numbervalue * 1.0, 2); //儲存各個數的平方相加
  }
  double mean = totalsum / number;

  double deviation =sqrt((totalquadraticsum - totalsum * totalsum / number) / (number - 1));

  cout << "The mean is " << mean << endl;
  cout << "The standard deviation is " << deviation << endl;

  return 0;
}
/*心得:
從前面幾次的CPP每次都有很多bug，因為本來比較習慣寫py，但這幾個作業的練習下來到第五個作業已經越來越少bug了，感覺有越來越上手
*/