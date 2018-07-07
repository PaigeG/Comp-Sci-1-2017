//Paige Gadapee
//Sept 28, 2017
//Code for shipping kiosk 

#include <iostream>
using namespace std; 

int main ()
{
   //variables
   double weight;
   char   rerun; 

   do
   {
      //input 
      cout << "Enter package weight : ";
      cin  >> weight; 

      //processing and output 
      if (weight>0 && weight<= 1)
        cout << "Your cost is $ 2" << endl;
      else if (weight>1 && weight<= 5)
        cout << "Your cost is $ 10" << endl;
      else if (weight>5 && weight<= 10)
        cout << "Your cost is $ 15" << endl;
      else if (weight>10 && weight<= 20)
        cout << "Your cost is $ 20" << endl;
      else if (weight > 20)
        cout << "Sorry we can not ship this package" << endl;
      else 
        cout << "This imput is not valid" << endl;
    
       cout << "Would you like to enter another package (y=yes, n=no) : ";
       cin  >> rerun; 
    } while (rerun == 'y' || rerun == 'Y');

   return 0;
} 
