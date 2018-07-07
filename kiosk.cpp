//Paige Gadapee 
//Sept 11, 2017
//code to calculate area of carpeting  

#include <iostream>
using namespace std;

int main()
{
   //variables
   int length, width, area;

   //input 
   cout <<"Enter the length :";
   cin >>length;
   cout <<"Enter the width :";
   cin >> width;  

   //processing
   area = length * width; 

   //output 
   cout <<"The area of carpeting you need is "<<area<<" sq ft"<< endl;

   return 0;
}
