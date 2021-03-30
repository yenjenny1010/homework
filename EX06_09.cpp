#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double celsiusToFahrenheit(double celsius)
{
  return (9.0 / 5.0) * celsius + 32;
}

double fahrenheitToCelsius(double fahrenheit)
{
  return (5.0 / 9) * (fahrenheit - 32);
}

int main()
{
  cout << setw(12) << "Celsius" << setw(12) << "Fahrenheit" << setw(12) << "|" <<
    setw(12) << "Fahrenheit" << setw(12) << "Celsius" << endl;
  cout << "-----------------------------------------------------------" << endl;

  double celsius = 40,farenheit = 120;
  for (int i = 1; i <= 10; celsius--, farenheit -= 10, i++)
  {
    cout << setw(12) << celsius << setw(12) << celsiusToFahrenheit(celsius) <<
      setw(12) << "|" << setw(12) << farenheit << setw(12) << setprecision(5) << showpoint << fahrenheitToCelsius(farenheit) << endl;
  }

  return 0;
}