#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
  double number = 10; 
  double numbervalue = 0;
  double sum = 0; 
  double sum_1 = 0; 
 
  cout << "Enter ten numbervalues: ";
  for (int i = 0; i < number; i++) {
    cin >> numbervalue;
    sum += numbervalue;
    sum_1 += pow(numbervalue * 1.0, 2); 
  }
  double mean = sum / number;

  double deviation =sqrt((sum_1 - sum * sum / number) / (number - 1));

  cout << "The mean is " << mean << endl;
  cout << "The standard deviation is " << deviation << endl;

  return 0;
}