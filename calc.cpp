//Paige Gadapee
//Oct 5, 2017
//Code for 4 function calculator 

#include <iostream>
using namespace std;

int main ()
{
   //variables 
   int numb1, numb2, answer;
   char ops;
   bool moreProcessing;

   //init
   moreProcessing = true;
   
   //processing
   while (moreProcessing == true)
   {
      //imput 
      cout << "Enter an equation or 0 x 0 to exit : ";
      cin  >> numb1 >> ops >> numb2; 

      //switch statement 
      switch (ops)
      {
        case 'x':
          if (numb1 == 0 && numb2 == 0)
          {
            moreProcessing = false;
          }
         else
         {
            answer = numb1 * numb2;
	    cout << numb1 << " " << ops << " " << numb2 << " = " << answer << endl;
         }
         break;

       case '+':
         answer = numb1 + numb2;
         cout << numb1 << " " << ops << " " << numb2 << " = " << answer << endl;
       break; 
     
       case '-':
         answer = numb1 - numb2;
         cout << numb1 << " " << ops << " " << numb2 << " = " << answer << endl;
       break; 

       case '/':
         if ( numb2 == 0)
           { 
	    cout << "Error -- cannot divide by 0" << endl;
           }
         else 
          {
	   answer = numb1 / numb2;
           cout << numb1 << " " << ops << " " << numb2 << " = " << answer << endl;
          }
       break; 
     } //end of switch
  } //end of while

   //output
   cout << "Thanks for using the calculator. Goodbye." << endl;
 
   return 0;
}
