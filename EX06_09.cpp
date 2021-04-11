#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double celsiusToFahrenheit(double celsius)
{
  double Fahrenheit = (9 / 5.0) * celsius + 32;
  return Fahrenheit;
}
double FahrenheitTocelsius(double Fahrenheit)
{
  double celsius = (5 / 9.0) * (Fahrenheit - 32);
  return celsius;
}
int main()
{
  cout << std::left << setw(16) << "Celsius" << setw(16) << "Fahrenheit"
       << "|"
       << "     " << setw(16) << "Fahrenheit"
       << "Celsius" << endl;
  for (int i = 0; i < 10; i++)
  {
    double Fahrenheit = celsiusToFahrenheit(40 - i);
    double celsius = FahrenheitTocelsius(120 - i * 10);
    cout << std::left << fixed << setprecision(1) << setw(16) << 40 - i << std::left << fixed << setprecision(1) << setw(16) << Fahrenheit << "|"
         << "     " << std::left << fixed << setprecision(1) << setw(16) << 120 - i * 10 << fixed << setprecision(2) << celsius << endl;
  }
  cout << std::left << setw(5) << "1" << endl;
  return 0;
}
/*心得:
先前沒有寫過有關格式化的CPP程式碼，剛開始使用setw()語法，但發現與課本題目所要的靠左對齊不符，於是上網找到std::left語法並使用。
又因題目要求須取到小數點第一或二位數，因此並上網找到，因此並上網找到cout <<fixed << setprecision()並使用。
學習到setw()語法、std::left語法、cout <<fixed << setprecision()語法
*/