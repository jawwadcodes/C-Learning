#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main ()
{
    int x1,x2,x3,y1,y2,y3;
    double difference1,difference2;
    double length1,length2;
    double minimum,maximum;
    cout << "Please enter 6 values that correspond to the x-y plane: ";
    cin  >> x1 >> x2 >> x3 >> y1 >> y2 >> y3;
    difference1= ((x2 -x1)*(x2 -x1)) - ((y2-y1)*(y2-y1));
    difference2= ((x3 -x1)*(x3 -x1)) - ((y3-y1)*(y3-y1));
    length1 = sqrt(difference1);
    length2 = sqrt(difference2);
    minimum = min(length1,length2);
    int select_int = 2 + (length2<length1);
    cout<<"Point"<<select_int<<endl;


















    return 0;
}