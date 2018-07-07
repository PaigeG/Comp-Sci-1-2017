//Paige Gadapee 
//October 12, 2017
//Code for 4 digit number

#include <iostream>
using namespace std;

int main ()
{
  //variables 
  int thousands, hundreds, tens, ones, n;

  //for loop  
  for (n = 1000; n<=9999; n++)
  {
    thousands = (n/1000) %10;
    hundreds  = (n/100) %10;
    tens      = (n/10) %10;
    ones      = n %10;
  }
 
  //processing
  27 = thousands+hundreds+tens+ones;
  thousands == 3*tens;

  //output
 cout << "The address is " <<thousands<<hundreds<<tens<<ones<< "Penn Ave"<< endl; 
   return 0;
}
