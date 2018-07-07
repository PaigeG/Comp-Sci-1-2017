//Paige Gadapee
//Sept 25, 2017
//code that uses the do-while loop 

#include <iostream> 
using namespace std;

int main()
{
   // variables 
   int length, width, area;
   char rerun;

   do 
   {
      // input
      cout << "Enter the length : ";
      cin  >> length;
      cout << "Enter the width : ";
      cin  >> width;

      // processing
      area = length * width; 

      // output
      cout << "The area that you need is " << area <<
      "Sq. Ft." << endl;
     
      //ask the user to rerun 
      cout << "Would you like to rerun another calculation? Y=yes N=no : ";
      cin  >> rerun; 
   } while (rerun == 'Y' || rerun == 'y');
   
   cout << "Have a nice day" << endl;

   return 0;
}
