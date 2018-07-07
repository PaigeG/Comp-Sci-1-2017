//Paige Gadapee 
//Sept 21, 2017
//Code for nested if-then-else statements

#include <iostream>
using namespace std;

int main ()
{
   //variables
   int month;

   //input
   cout << "Enter a month number (1-12) : ";
   cin  >> month;

   //processing and output 
   if (month == 1)
      cout << "Jan  " << endl;
   else if (month == 2)
      cout << "Feb  " << endl;
   else if (month == 3)
      cout << "March" << endl;
   else if (month == 4) 
      cout << "April" << endl;
   else if (month == 5)
      cout << "May"   << endl;
   else if (month == 6) 
      cout << "June"  << endl;
   else if (month == 7)
      cout << "July"  << endl;
   else if (month == 8) 
      cout << "Aug"   << endl;
   else if (month == 9)
      cout << "Sept"  << endl;
   else if (month == 10)
      cout << "Oct"   << endl; 
   else if (month == 11) 
      cout << "Nov"   << endl;
   else if (month == 12)
      cout << "Dec"   << endl;
   else 
      cout << "Sorry! You have entered an invalid month number!" << endl;

   cout <<"Have a nice day!" << endl;

    return 0;
}
