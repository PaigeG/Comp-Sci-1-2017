//Paige Gadapee
//Nov 2, 2017
//Code for random dice roll

#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;

int main()
{
   //varibales
   int i, dice1, dice2, roll, ranNumb;

   //int 
   srand(time(0));

  //processing 
  for (i=0; i<10; i++)
  { 
    ranNumb = rand();
    dice1 = (ranNumb%6) + 1;
    
    ranNumb = rand();
    dice2 = (ranNumb%6) + 1;

    roll = dice1 + dice2;

    cout << roll << endl;
  }
   
  return 0;
}
