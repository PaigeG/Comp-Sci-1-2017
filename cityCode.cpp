//Paige Gadapee
//Oct 2, 2017
//Code for Fordham Airlines

#include <iostream>
using namespace std; 

int main ()
{
   //variables
   int time, tickets;
   const int DdayFlight = 150;
   const int EdayFlight = 180;
   const int DnightFlight = 100;
   const int EnightFlight = 120;
   char cityCode, day;
   double cost;

   //input
   cout << "Welcome to Fordham Airlines!" << endl;
   cout << "Enter your flight destination [C]hicago, [P]ortland, [M]aimi : ";
   cin  >> cityCode;
   cout << "Enter your flight time : ";
   cin  >> time;
   cout << "Enter weekday (D) or weekend (E) : ";
   cin  >> day;

   //switch statement
   switch (cityCode)
   {
     case 'm':
     case 'M':
       cout << "Going to Miami"<< endl;
          if (500<time && time<=1900)
	     { if (day = 'D')
	       {  cout << "Each ticket will cost : $"<< DdayFlight << endl;
		  cout << "Enter the number of tickets that you would like : ";
                  cin  >> tickets;
                  cout << "Amount you owe is : "<< DdayFlight * tickets << endl;
		  cout << "How much will you pay : ";
    		  cin  >> cost;
	          cout << "Your Change is : "<< cost-(DdayFlight * tickets) << endl;
                }
               else if (day = 'E')
	       {  cout << "Each ticket will cost : $"<< EdayFlight << endl;
		  cout << "Enter the number of tickets that you would like : ";
                  cin  >> tickets;
                  cout << "Amount you owe is : "<< EdayFlight * tickets << endl;
		  cout << "How much will you pay : ";
    		  cin  >> cost;
		  cout << "Your Change is : "<< cost-(EdayFlight * tickets) << endl;
                }
               else 
		cout << "Day entered is invaild" << endl;
             }
          else if ((1900<time && time<=2359) || (00<=time && time<=500))
	     { if (day = 'D')
	       {  cout << "Each ticket will cost : $"<< DnightFlight << endl;
		  cout << "Enter the number of tickets that you would like : ";
                  cin  >> tickets;
                  cout << "Amount you owe is : "
                       << DnightFlight * tickets << endl;
		  cout << "How much will you pay : ";
    		  cin  >> cost;
		  cout << "Your Change is : " << cost-(DnightFlight * tickets) << endl;
                }
               else if (day = 'E')
	       {  cout << "Each ticket will cost : $"<< EnightFlight << endl;
		  cout << "Enter the number of tickets that you would like : ";
                  cin  >> tickets;
                  cout << "Amount you owe is : "
                       << EnightFlight * tickets << endl;
		  cout << "How much will you pay : ";
    		  cin  >> cost;
		  cout << "Your Change is : " << cost-(EnightFlight * tickets) << endl;
                }
               else 
		cout << "The day entered is invaild" << endl;
             }
          else 
	    cout << "Time entered is invaild" << endl;  
       break;

     case 'c':
     case 'C':
       cout << "Going to Chicago"<< endl;
          if (500<time && time<=1900)
	     { if (day = 'D')
	       {  cout << "Each ticket will cost : $"<< DdayFlight/2 << endl;
		  cout << "Enter the number of tickets that you would like : ";
                  cin  >> tickets;
                  cout << "Amount you owe is : "
                       << (DdayFlight/2) * tickets << endl;
		  cout << "How much will you pay : ";
    		  cin  >> cost;
		  cout << "Your Change is : "<< cost-((DdayFlight/2) * tickets) << endl;
                }
               else if (day = 'E')
	       {  cout << "Each ticket will cost : $"<< EdayFlight/2 << endl;
		  cout << "Enter the number of tickets that you would like : ";
                  cin  >> tickets;
                  cout << "Amount you owe is : "
                       << (EdayFlight/2) * tickets << endl;
		  cout << "How much will you pay : ";
    		  cin  >> cost;
		  cout << "Your Change is : "<< cost-((EdayFlight/2) *tickets) << endl;
                }
               else 
		cout << "Day entered is invaild" << endl;
             }
          else if ((1900<time && time<=2359) || (00<=time && time<=500))
	     { if (day = 'D')
	       {  cout << "Each ticket will cost : $"<< DnightFlight/2 << endl;
		  cout << "Enter the number of tickets that you would like : ";
                  cin  >> tickets;
                  cout << "Amount you owe is : "
                       << (DnightFlight/2) * tickets << endl;
		  cout << "How much will you pay : ";
    		  cin  >> cost;
		  cout << "Your Change is : "<< cost-((DnightFlight/2) *tickets) << endl;
                }
               else if (day = 'E')
	       {  cout << "Each ticket will cost : $"<< EnightFlight/2 << endl;
		  cout << "Enter the number of tickets that you would like : ";
                  cin  >> tickets;
                  cout << "Amount you owe is : "
                       << (EnightFlight/2) * tickets << endl;
		  cout << "How much will you pay : ";
    		  cin  >> cost;
		  cout << "Your Change is : " << cost-((EnightFlight/2) *tickets) << endl;
                }
               else 
		cout << "The day entered is invaild" << endl;
             }
          else 
	    cout << "Time entered is invaild" << endl;  
        break;

     case 'p':
     case 'P':
       cout << "Going to Portland"<< endl;
          if (500<time && time<=1900)
	     { if (day = 'D')
	       {  cout << "Each ticket will cost : $"<< DdayFlight *2 << endl;
		  cout << "Enter the number of tickets that you would like : ";
                  cin  >> tickets;
                  cout << "Amount you owe is : "
                       << (DdayFlight*2) * tickets << endl;
		  cout << "How much will you pay : ";
    		  cin  >> cost;
		  cout << "Your Change is : "<< cost-((DdayFlight*2) *tickets) << endl;
                }
               else if (day = 'E')
	       {  cout << "Each ticket will cost : $"<< EdayFlight *2 << endl;
		  cout << "Enter the number of tickets that you would like : ";
                  cin  >> tickets;
                  cout << "Amount you owe is : "
                       << (EdayFlight *2) * tickets << endl;
		  cout << "How much will you pay : ";
    		  cin  >> cost;
		  cout << "Your Change is : "<< cost-((EdayFlight*2) *tickets) << endl;
                }
               else 
		cout << "Day entered is invaild" << endl;
             }
          else if (( 1900<time && time<=2359) || (00<=time && time<=500))
	     { if (day = 'D')
	       {  cout << "Each ticket will cost : $"<< DnightFlight*2 << endl;
		  cout << "Enter the number of tickets that you would like : ";
                  cin  >> tickets;
                  cout << "Amount you owe is : "
                       << (DnightFlight*2) * tickets << endl;
		  cout << "How much will you pay : ";
    		  cin  >> cost;
		  cout << "Your Change is : "<< cost-((DnightFlight*2) *tickets) << endl;
                }
               else if (day = 'E')
	       {  cout << "Each ticket will cost : $"<< EnightFlight*2 << endl;
		  cout << "Enter the number of tickets that you would like : ";
                  cin  >> tickets;
                  cout << "Amount you owe is : "<< (EnightFlight*2) * tickets << endl;
		  cout << "How much will you pay : ";
    		  cin  >> cost;
		  cout << "Your Change is : "<< cost-((EnightFlight*2) *tickets) << endl;
                }
               else 
		cout << "The day entered is invaild" << endl;
             }
          else 
	    cout << "Time entered is invaild" << endl;  
       break;

     default:
	cout << "The place entered is invaild" << endl;
   }
   
    return 0;
}
