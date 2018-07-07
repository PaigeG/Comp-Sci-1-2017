//Paige Gadapee
//Code for overloading

#include <iostream>
using namespace std;

double avg (double, double);
double avg(double, double, double);
double avg(double, double, double, double);

int main()
{
  //variables 
  double a, b, c, d;

  //inoout
  cout << "Enter 2 numbers to avg : ";
  cin  >> a >> b;
  cout << "The avg is " << avg(a, b) << endl;

  cout << "Enter 3 numbers to avg : ";
  cin  >> a >> b >> c;
  cout << "The avg is " << avg(a, b, c) << endl;

  cout << "Enter 4 numbers to avg : ";
  cin  >> a >> b >> c >> d;
  cout << "The avg is " << avg(a, b, c, d) << endl;

  return 0;
}

double avg(double x, double y)
{
  return ((x+y)/2);
}

double avg(double x, double y, double z)
{
  return ((x+y+z)/3.0);
}

double avg(double x, double y, double z, double a)
{
  return ((x+y+z+a)/4.0);
}


