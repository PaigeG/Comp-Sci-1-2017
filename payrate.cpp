//Paige Gadapee
//Sept 25, 2017
//Code for Pay Rates Homework 

#include <iostream> 
using namespace std; 

int main ()
{
    //variables 
    int uniondue, dependants, dwithhold;
    double hours, rate, social, federal, state, grosspay, netpay;
    char rerun; 

   //inits
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision (2);

   do
   {
       //input 
       cout << "Number of hours you work in a week : ";
       cin  >> hours;
       cout << "              Number of dependants : "; 
       cin  >> dependants; 

      //processing 
      uniondue = 10;
      rate     = 16.78;
      if (hours <= 40)  
        grosspay = (hours * rate);
      else
        grosspay = (40*rate) + ((hours - 40)*1.5*rate);
      social   = (.06 * grosspay); 
      federal  = (.14 * grosspay);
      state    = (.05 * grosspay); 
      if (dependants >= 3) 
        dwithhold = 35;
     else 
        dwithhold = 0;
     netpay = grosspay - (social + federal + state + uniondue + dwithhold);

      //output
      cout << "Your Gross Pay is " <<"\t"<< "$" << grosspay << endl;
      cout << "                                           " << endl;
      cout << "Social Security Tax"<<"\t"<< "$" << social   << endl;
      cout << "Federal Tax"        <<"\t"<<"\t"<< "$" << federal  << endl;
      cout << "State Tax"          <<"\t"<<"\t"<< "$" << state    << endl;
      cout << "Union Dues"         <<"\t"<<"\t"<< "$" << uniondue << endl;
      cout << "Insurance"          <<"\t"<<"\t"<< "$" << dwithhold<< endl;
      cout << "                                           " << endl;
      cout << "Take home pay is "  <<"\t"<< "$" << netpay   << endl; 

      cout << "Would you like to rerun the program? Y = yes and N = no : ";
      cin >> rerun;
   }while (rerun == 'y' || rerun == 'Y');

    return 0;
}
