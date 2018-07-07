//Paige Gadapee
//Nov 6, 2017
//program that uses a function to calculate area

#include <iostream>
#include <cmath>
using namespace std;

const double pi=3.14159; 

//prototypes
double area(double); 
double volume(double);

int main ()
{
   //variables
   double radius, areaOfCircle, volumeOfCircle;
   char rerun;

do
{
   //input 
   cout << "Enter the radius of the circle : ";
   cin  >> radius;

   //processing
   areaOfCircle = area(radius);
   volumeOfCircle = volume(radius);

   //outut
   cout << "Radius = " << radius << " inches\n"
        << "Area of Circle = "<< areaOfCircle << endl;
   cout << "Volume of circle = " << volumeOfCircle << endl;
   cout << "Would you like to run again : ";
   cin  >> rerun;
}while (rerun == 'y' || rerun == 'Y');

    return 0;
}

double area(double r)
{
   double answer;

   answer = (pi * pow(r, 2));
   return (answer);
}

double volume(double r)
{
   return ((4.0 / 3.0)*pi*pow(r,3));
}
