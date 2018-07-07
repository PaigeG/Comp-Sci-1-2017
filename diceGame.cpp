#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
 //variables
 int i, dice, random;

 //init 
 srand(time(0));

 //processing 
 for (i=0; i<10; i++)
 {
  random = rand();
  dice = (random % 6) + 1;

  cout << dice << endl;
 }
 return 0;
}
