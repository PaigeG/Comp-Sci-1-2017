//Paige Gadapee
//November 11, 2017
//Code for extra credit 2

#include <iostream>
using namespace std;

//prototype
void reverseWord(string);

int main ()
{
   //variables
   string sentence,rerun, thisWord="";
   int i, len;
   char letter;
 
  //input
  cout << "Welcome to revese the words!"<< endl;
  

   cout << "Enter your sentence, word, or phrase : ";
   getline (cin, sentence);
 
   len = sentence.length();
 
   cout << "The reversed sentence is : " << endl;

   //for loop
   for (i=0; i<len; i++)
   {
      letter = sentence.at(i);
      if (letter == ' ')
       {
         reverseWord(thisWord);
         thisWord = "";
       }
      else 
       thisWord = thisWord+letter;
   }
  cout << endl;
 

  //output
  cout << "Goodbye!" << endl;

   return 0;
}

void reverseWord(string s)
{
  int i, len;

  len = s.length();

 for (i=len-1; i >= 0; i--)
 {
   cout << s.at(i);
 }
  
 cout << " ";
}
