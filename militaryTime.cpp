//Paige Gadapee
//Nov 14, 2017
//Code for military time 

#include <iostream>
using namespace std;

//prototypes
void input(int&, int&, char&);
void convert(int&, int&, char&);
void output(int&, int&, char&);

int main ()
{
 //varibles
 int hour, min;
 char ampm, rerun;

  //input
  do
  {
    input(hour, min, ampm);
    convert(hour, min, ampm);
    output(hour, min, ampm);

    cout << "Would you like to run again : ";
    cin  >> rerun;
  }while(rerun == 'y' || rerun == 'Y');

   return 0;
}

void input(int& hour, int& min, char& ampm)
{
     cout << "Enter hours : ";
     cin  >> hour;
     if (hour > 23)
     cout << "Please enter a value between 0 and 23" << endl;
  
      cout << "Enter minutes : ";
      cin  >> min;
      if (min > 59)
      cout << "Please enter a value between 0 and 59" << endl;  
}

void convert(int& hour, int& min, char& ampm)
{
  if (hour>12)
   {
     hour = hour - 12;
     ampm = 'p';
   }
  else if (hour == 12)
     ampm = 'p';
  else
     ampm = 'a';
}

void output(int& hour, int& min, char& ampm)
{
  if (ampm == 'p')
    {
      if (min<10)
       cout << hour << ":0" << min << "P.M." << endl;
      else
       cout << hour << ":" << min << "P.M." << endl;
     }
  else 
    {
      if (min<10)
       cout << hour << ":0" << min << "A.M." << endl;
      else
       cout << hour << ":" << min << "A.M." << endl;
     }
    }

