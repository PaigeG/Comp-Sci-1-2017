//Paige Gadapee 
//Sept 21, 2017
//code for Bronx Bookstore
 
#include <iostream> 
using namespace std;

int main()
{
   //variables
   string name;
   int Shakespeare, Homer, Cervantes; 
   double Scost, Ccost, Hcost, cost, total, userpay, tax, change;

   // inits 
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);   

   //input

   cout << "Welcome to the Bronx Bookstore" << endl;
   cout << "            Enter your first name : ";
   cin  >> name;
   cout << "  Enter number of Cervantes Books : ";
   cin  >> Cervantes;
   cout << "      Enter number of Homer Books : ";
   cin  >> Homer;
   cout << "Enter number of Shakespeare Books : ";
   cin  >> Shakespeare;

   //processing 
   Scost = (Shakespeare * 30.50);
   Ccost = (Cervantes * 41.25);
   Hcost = (Homer * 15.85);
   cost  = (Hcost + Scost + Ccost);
   tax   = (cost * .1);
   total = (tax + cost);

   //input
   cout << "               Total cost of order is : "<< total << endl;
   cout << "          How much money will you pay? $";
   cin  >> userpay;

   //processing 
   change = userpay - total;
   
   // output
   cout << "                                      "     << endl;
   cout << "--------                              "     << endl;
   cout << "Customer: " << name                         << endl;
   cout << "--------                              "     << endl;
   cout << "Item     "<<"\t"<<"Number"<<"\t"<<"Price"   << endl;
   cout << "Cervantes"<<"\t"<<Cervantes<<"\t"<<"$"<<Ccost << endl;
   cout << "Homer"<<"\t"<<"\t"<<Homer<<"\t"<<"$"<<Hcost   << endl;
   cout << "Shakespeare"<<"\t"<<Shakespeare<<"\t"<<"$"<<Scost<< endl;
   cout << "--------                                   "<< endl;
   cout << "Tax" <<"\t"<<"\t"<<"\t"<<"$"<< tax          << endl;
   cout << "--------                                   "<< endl;
   cout << "Total"<<"\t"<<"\t"<<"\t"<<"$"<<total        << endl;
   cout << "User Pay"<<"\t"<<"\t"<<"$"<<userpay         << endl;
   cout << "--------                                   "<< endl;
   cout << "Change" <<"\t"<<"\t"<<"\t"<<"$"<<change     << endl;

   return 0;
}
