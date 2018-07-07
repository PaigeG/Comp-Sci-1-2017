//Paige Gadapee
//October 26, 2017
//Code for Drawing Shapes

#include <iostream>
using namespace std;

int main ()
{
  //varibales 
  char symbol, rerun;
  int length, width, side; 

  side = 1; 

  
  //input
  cout << "Please specify the side length : ";
  cin  >> length;
  cout << "Please specify the character : ";
  cin  >> symbol;
  
  //making the shape
  while (side <= length)
   {
          side++;
           
 
       for (width = 1;width<length;width++)
          cout << symbol;  

          cout << symbol<< endl;      
   }

   cout << "would you like to make a triangle : ";
   cin  >> rerun;

   if (rerun == 'y' || rerun == 'Y')
    {
  cout << "Please specify the side length : ";
  cin  >> length;
  cout << "Please specify the character : ";
  cin  >> symbol;
     
        while (side <= length)
        {
             side++;
           
       for (width = 1;width<side;width++)
          cout << symbol; 
        }
    }
   else 
     cout << "Have a nice day!" << endl;

   return 0;
}
