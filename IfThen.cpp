//Paige Gadapee
//Sept 18, 2017
//code for if then statements 

#include <iostream>
using namespace std;

int main()
{
   // variables 
   int number; 

   // input
   cout << "Enter an integer : ";
   cin  >> number;

   //processing and output
   if (number % 5 == 0)
   cout << "HiFive" << endl;

   if (number % 2 == 0)
   cout << "HiEven" << endl;

   return 0;
}
