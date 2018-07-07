//Paige Gadapee
//Oct 12, 2017
//code for string of built in functions

#include <iostream>
using namespace std;

int main ()
{
   //varibales
   int i, len;
   string phone;
   char token, rerun;
   
 do
 { 
  //input
   cout << " Enter phone (1-800-Flowers) : ";
   cin  >> phone;
   
   //processing
   len = phone.length();
   for (i=0; i<len; i++)
   {
      token = phone.at(i);
      switch (token)
      {
	case 'a':
	case 'A':
	case 'b':
	case 'B':
	case 'c':
	case 'C':
	  cout << "2";
	break;

	case 'd':
	case 'D':
	case 'e':
	case 'E':
	case 'f':
	case 'F':
	  cout << "3";
        break;

	case 'g':
	case 'G':
	case 'h':
	case 'H':
	case 'i':
	case 'I':
	  cout << "4";
	break;

	case 'j':
	case 'J':
	case 'k':
	case 'K':
	case 'l':
	case 'L':
	  cout << "5";
	break;

	case 'm':
	case 'M':
	case 'n':
	case 'N':
	case 'o':
	case 'O':
	  cout << "6";
	break;
	
	case 'p':
	case 'P':
	case 'q':
	case 'Q':
	case 'r':
	case 'R':
	case 's':
	case 'S':
	  cout << "7";
	break;

	case 't':
	case 'T':
	case 'u':
	case 'U':
	case 'v':
	case 'V':
	  cout << "8";
	break;

	case 'w':
	case 'W':
	case 'x':
	case 'X':
	case 'y':
	case 'Y':
	case 'z':
	case 'Z':
	  cout << "9";
	break;


	default:
          cout << token;
        break;
      }
   }

   cout << endl;
   cout << "Would you like to enter another number (y=yes, n=no) : ";
   cin  >> rerun;
 } while (rerun == 'y' || rerun == 'Y');

    return 0;
}
