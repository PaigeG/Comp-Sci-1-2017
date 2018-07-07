//Paige Gadapee 
//Sept 18, 2017
//code for capacity of a room

#include <iostream>
using namespace std;

int main ()
{
   //variables
   int number;

   // input
   cout << "Enter the number of people : ";
   cin >> number; 

   //processing and output
   if (number <= 100)
   {
      cout << "You can hold the meeting and add "<< 100 - number << " more people to the room"<< endl;
   }
   else 
   {
       cout << "You cannot hold the meeting becuase there are " << number - 100 << " people too many."<< endl;
   }

   return 0;
}
