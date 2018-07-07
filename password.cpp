//Paige Gadapee
//November 02, 2017
//Code for checking password

#include <iostream>
using namespace std;

   
// globals vars
string password;
int len;

// prototypes
bool digit(string);
bool specialCharacter (string);
bool Uppercase(string);
bool tenChar(string);


int main ()
{

   //input
   cout << "Enter a password : ";
   getline (cin, password);

   len = password.length ();

   //processing
  
  if (tenChar(password) == true)
   {
      if (specialCharacter(password) == true)
         {
   	    if (digit(password) == true)
     		{
  		   if (Uppercase (password) == true)
                     cout << "Vaild password!" << endl;
  		   else 
                     cout << "Invaild password!" << endl;
  		}
            else 
              cout << "Invaild password!" << endl;
         }
      else 
         cout << "Invaild password!" << endl;
    }
  else 
     cout << "Invaild password!" << endl;

   return 0;
}

 bool specialCharacter(string password)
 {
    //variable
    char sym;
    int i=0;

    for (i=0; i<len; i++)
    {
      sym = password.at(i);

      if (sym == '!' || sym == '@' || sym == '#' ||
          sym == '$' || sym == '%' || sym == '^' ||
          sym == '&' || sym == '*' || sym == '(' ||
          sym == ')')
         return true;
    }
   
   return false;
 }

 bool digit(string password)
 {
    char num;
    int i=0;

   
    for (i=0; i<len; i++)
    {
       num = password.at(i);

       if (num >='0' && num<='9')
          return true;
    }

   return false;
 }

 bool Uppercase(string password)
 {
     //variable
      char x;
      int i=0;
 
      for (i=0; i<len; i++)
       {     
         x = password.at(i);
        if (x >= 'A' && x <= 'Z')
 		return true;
       }
         return false;
  }

bool tenChar(string password)
 {
   if (len>= 10)
     return true;
   else 
     return false;
  
 }   
