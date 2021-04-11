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
  cout<<setw(16)<<"Celsius"<<setw(16)<<"Fahrenheit"<<"|"<<setw(16)<<"Fahrenheit"<<"Celsius";
  for (int i = 0; i < 10; i++)
  {
    double Fahrenheit = celsiusToFahrenheit(40 - i);
    double celsius = FahrenheitTocelsius(120 - i * 10);
    
  }
}