//Paige Gadapee
//October 3, 2017
//Code for classroom exercises 

#include <iostream>
using namespace std;

int main ()
{
   //variables
   int tests, scores, points;
   int  totalPoints=0;
   int totalScore=0;
   double average=0;

   //input
   cout << "Enter the number of tests : ";
   cin  >> tests;

  //processing 
  while (tests > 0)
  {
      cout << "Enter the score of the test : ";
      cin  >> scores;
      totalScore = totalScore + scores;

      cout << "Enter the total possible points possible for the exercise : ";
      cin  >> points;
      totalPoints = totalPoints + points;

      tests--;
  }

  average = (totalScore/ (double) totalPoints) * 100;;

  //output 
  cout << "Your total is " << totalScore << " out of " << totalPoints << ", or " 
       << average << "%" << endl;  
  
    return 0;
}
