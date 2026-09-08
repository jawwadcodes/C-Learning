#include <iostream>
using namespace std;
int main()
{
   int x,d1,d2,d3,d4,d5,d6,d7,d8,d9,d10;
   cout<< "Enter the 9 digit prefix: ";
   cin >>x;
   d2 = x%10;
   d3= (x/10)%10;
   d4= (x/100)%10;
   d5= (x/1000)%10;
   d6= (x/10000)%10;
   d7= (x/100000)%10;
   d8= (x/1000000)%10;
   d9= (x/10000000)%10;
   d10= (x/100000000)%10;
   d1=(11-(2*d2 + 3*d3 + 4*d4 + 5*d5 + 6*d6 + 7*d7 + 8*d8 + 9*d9 + 10*d10)%11)%11;

   cout<<"ISBN: "<< x << d1 <<endl;

   








    return 0;
}