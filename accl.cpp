//Paige Gadapee
//Sept 14, 2017
//source code for acceleration

#include <iostream>
using namespace std;

int main ()
{
   //variables
   double v1, v0, time, acceleration;
  
   //input
   cout << "Enter starting velocity v0 (meters/sec) : ";
   cin  >> v0;
   cout << "  Enter ending velocity v1 (meters/sec) : ";
   cin  >> v1;
   cout << "                       Enter the time t : ";
   cin  >> time;

  //processing
  acceleration = (v1-v0) / time;

  //output
  cout << "The average acceleration is " << acceleration << endl;
   
  return 0;
}
