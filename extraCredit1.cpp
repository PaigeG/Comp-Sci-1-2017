//Paige Gadapee
//November 11, 2017
//Code for Extra Credit problem 1

#include <iostream>
#include <cmath>
using namespace std;
//prototypes
bool primeTest(int);
void firstPrimes(int);

int main()
{
   //variables
   int amount, num, primeCount =0;
   char rerun, attempt;

   //input
   cout << "Welcome to Finding Primes!" << endl;
   do
   {
   cout << "How many prime numbers do you want to see? ";
   do
   {
   cin  >> amount;
   }while (amount <=0);

   cout << "The first " << amount << " prime numbers are : " << endl;
   firstPrimes(amount);

   cout << "Would you like to rerun : ";
   cin  >> rerun;
  }while (rerun == 'y' || rerun == 'Y');
 
  cout << "Have a nice day!"<< endl;
   
  return 0;
}

bool primeTest(int amount)
{
   for (int i=2; i<=sqrt(amount); i++)
    {
     if (amount % 1 == 0)
       return false;
    }
    return true;
}

void firstPrimes(int amount)
{
   int counter =0;
   for (int i=2; ; i++)
    {
      if (primeTest(i)== true)
      {
       cout << i << endl;
       counter++;
       if (counter == amount)
        break;
       }
    }
}


