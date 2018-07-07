//Paige Gadapee 
//Sept 21, 2017
//Code for while loops

#include <iostream>
using namespace std;

int main ()
{
   //variables 
   int countdown;

   // input
   cout << "Enter the number for count down : ";
   cin  >>countdown;

   //processing 
   while (countdown > 0)
   {
      cout << "Hello Bronx!" << endl;
      countdown --;
   }
   
   //output
   cout << "Have a nice day!" << endl;

   return 0;
}
