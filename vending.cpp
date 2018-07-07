//Paige Gadapee
//November 8, 2017
//Code for Vending Machine problem

#include <iostream>
using namespace std;

void twinkie();
bool good(int);

const int twinkieCost = 350;
const int Dollar = 100, Q = 25, D = 10, N = 5;

int main()
{
   //varibles
   char rerun;

  do
  {
    twinkie ();
    cout << "Would you like to have another twinkie? (y or n) : ";
    cin  >> rerun;
  }while(rerun == 'y' || rerun == 'Y');
 
  return 0;
}

void twinkie()
{
  //varibles
  int total = 0, coin, change;

  do 
  {
    cout << "Enter a coin or dollar amount : ";
    cin  >> coin;

    if (good(coin))
    {
        total += coin;
        cout << "You've added "<< total << " cents." << endl;
        cout << "You need " << twinkieCost - total << " more." << endl;
    }
    else
    {
        cout << "This is not a vaild coin." << endl;
    }
  }while (total < twinkieCost);
  
   //output
   cout << "Enjoy your twinkie!"<< endl;

  //processing
  change = total - twinkieCost;

  if (change > 0)
  {
   cout << "Your change is : " << change << endl;
  }
    
   return;
}

bool good(int c)
{
    if (c==N || c==D || c==Q || c==Dollar)
         return true;
    else
         return false;
}
