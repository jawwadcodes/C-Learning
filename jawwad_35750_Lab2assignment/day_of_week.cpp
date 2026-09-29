#include <iostream>
using namespace std;
int main()
{
    int y;
    int d;
    int m;
    cout << "Please enter a  year: ";
    cin >>y;
    cout << "Please enter a month: ";
    cin >> m;
    cout << "Please enter a  day: ";
    cin >>d;
    int yout = y - (14 - m)/12;
    int x = yout + yout/4 - yout/100 + yout/400;
    int mout = m + 12 * ((14 - m)/12) - 2;
    int dout = (d + x + 31*mout/12)%7;

    cout << dout << endl;
  return 0;  
}