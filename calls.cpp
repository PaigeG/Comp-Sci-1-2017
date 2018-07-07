//Paige Gadapee
//Oct 5, 2017
//Code for Phone call rate

#include <iostream>
using namespace std;

int main ()
{
   //variables
   int time, min; 
   double chargeRate, totalCharge;
   string day;
   char rerun; 
   
   do 
   {
   //input 
   cout << "Enter the day of the call (Mo, Tu, We, Th, Fr, Sa, Su) : ";
   cin  >> day;
   cout << "Enter the time of the call in military time : ";
   cin  >> time;
   cout << "Enter number of minutes on the phone : ";
   cin  >> min;

   //if else statement 
   if (day == "Mo" || day == "Tu" || day == "We" ||
       day == "Th" || day == "Fr") 
       {
         if (800<= time && time<=1800)
          chargeRate = .4;
         else if (1800<time && time<=2359 || 00<=time && time<800)
          chargeRate = .25;
         else
          cout << "Time entered is invaild" << endl; 
       }  
  else if (day == "Sa" || day == "Su")
       chargeRate = .15;
  else 
    cout << "Day entered is invaild" << endl;

   //processing 
   totalCharge = chargeRate * min;

  //output 
  cout << "Your call on " << day << " was " << min 
       << " minutes. The cost of the call is $ " << totalCharge << endl;
  
  cout << "Would you like to run another calculation ( y=yes, n=no) : ";
  cin  >> rerun;
   } while (rerun == 'Y' || rerun == 'y');

   return 0;
}
