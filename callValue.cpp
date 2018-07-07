//Paige Gadapee
//Nov 13, 2017
//Code for call by value

#include <iostream>
using namespace std;

//prototypes
void outputFunc(int&);

int main()
{
int a;

a=100;
outputFunc(a);
cout << "A = " << a << endl;

return 0;
}

void outputFunc(int& x)
{
  cout << "X = " << x << endl;
  x++; x++; x++;
  cout <<"X = " << x << endl;
}
