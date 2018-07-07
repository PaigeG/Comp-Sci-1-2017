//Paige Gadapee 
//October 26, 2017 
//Code for Greatest Common Disivor 

#include <iostream>
using namespace std;

int main ()
{
   //varibales 
    int numb1, numb2, gcd, div, smaller;
    char rerun;
  
   //processing
   do
   {
      //input
      cout << "Enter two numbers : "<< endl;
      cin  >> numb1;
      cin  >> numb2;

      if (numb1 < numb2)
        smaller = numb1;
      else 
        smaller = numb2;

      for (div=1;div <= smaller;div++)
      {
         if ((numb1 % div == 0) && (numb2 % div == 0))
            gcd = div;
      }

      cout << "The GDC of " << numb1 << " and " << numb2 << 
               " is " << gcd << endl;

      //output
      cout << "Would you like to run again?" << endl;
      cin  >> rerun;

  }while (rerun == 'y' || rerun == 'Y');
 
  //output 
  cout << "Have a nice day!"<< endl;

   return 0;
}
