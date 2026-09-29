#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;
int main()
{
    srand(time(0));
    int num1;
    int num2;
    int num3;
    double avg;
    int minimum;
    int maximum;
    num1 = rand()%1000;
    num2 = rand()%1000;
    num3 = rand()%1000;
    double total= num1 + num2 + num3 ;
    avg = total/3.0;
    minimum= min(num1,min(num2,num3));
    maximum= max(num1,(max(num2,num3)));
    int mid_value= static_cast <int>(total) - minimum - maximum;
    cout << "Numbers: " <<num1<<" "<<num2<<" "<<num3<<endl;
    cout << "Average: " << avg<<endl;
    cout << "Maximum: "<< maximum<<endl;
    cout << "Minimum: "<< minimum<<endl;
    cout << "Sorted: " << minimum <<" "<<mid_value<<" "<<maximum<<endl;







    return 0;
}