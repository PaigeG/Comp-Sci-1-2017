//Paige Gadapee
//Nov 14, 2017
//Code for Guessing Game

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//prototypes
bool vaildRoll();
bool vaildFlip();
void rollAndFlip(int& , char&);

//global varibales 
int number;
char flip; 

int main()
{
   //varibles
   int points, dice;
   char rerun, HoT;

   points = 0;

   do
   {
      //user input of numbers and check 
      cout << "Guess a 6-sided dice roll : ";
      cin  >> number;
      cout << "Enter [H]eads or [T]ails : ";
      cin  >> flip;  
  
    if (vaildRoll() == false || vaildFlip () == false)
      cout << "This is not a vaild input" << endl;
 
   //random number and flip
     rollAndFlip (dice, HoT);

  //comparing random to user input
    if (dice == number && HoT == flip)
       {
        cout << "Correct! The dice roll was " << dice << 
                " and the coin flip was " << flip << endl;

         points = points + 10;
         cout << "Your current point value is : " << points << endl;
       }
   else 
     {
       cout << "Incorrect! The dice roll was " << dice << 
               " and the coin flip was " << HoT << endl;

       points = points - 1;
       cout << "Your current point value is " << points << endl;
     }

    //rerun
    cout << "Do you want to try again : ";
    cin  >> rerun;
  }while (rerun == 'y' || rerun == 'Y');

   return 0;
}
 
bool vaildRoll()
{
   if (number>0 && number<=6)
     return true;
   else 
     return false;
}

bool vaildFlip()
{
   if (flip == 'H' || flip == 'T')
     return true;
   else
     return false;
}

void rollAndFlip (int& dice, char& HoT)
{
   //varibles
   int roll, ranNumber, coin, random;

   //init
   srand(time(0));

  //processing
   ranNumber = rand ();
   dice = (ranNumber % 6) + 1;

   random = rand ();
   coin = (random % 2);
     if (coin == 0)
      HoT = 'H';
     else 
      HoT = 'T';
 }
