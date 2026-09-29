//Syed Jawwad Hasnain Zaidi (35750) CSE_141
#include <iostream>
using namespace std;
int main()
{
    int orignalnumber;
    int largestnumber;
    int smallestnumber;
    bool Valid = false;
    int steps = 0;
    while (Valid == false)
    {
        std::cout << "Enter a 4 digit number: ";
        cin >> orignalnumber;
        if (orignalnumber >= 1000 && orignalnumber <= 9999)
        {
            int d1 = orignalnumber / 1000;
            int d2 = (orignalnumber / 100) % 10;
            int d3 = (orignalnumber / 10) % 10;
            int d4 = orignalnumber % 10;
            if (d1 == d2 && d1 == d3 && d1 == d4)
            {
                Valid = false;
                std::cout << "Invalid Input (The number should be between 1000-9999 and should not have all the same digits.)" << endl;
            }

            else
            {
                Valid = true;
            }
        }
    }
    while (orignalnumber != 6174)
    {
        steps = steps + 1;
        int d1 = orignalnumber / 1000;
        int d2 = (orignalnumber / 100) % 10;
        int d3 = (orignalnumber / 10) % 10;
        int d4 = orignalnumber % 10;
        for (int i = 1; i <= 4; i++)
        {
            if (d1 > d2)
            {
                int temp = d1;
                d1 = d2;
                d2 = temp;
            }
            if (d2 > d3)
            {
                int temp = d2;
                d2 = d3;
                d3 = temp;
            }
            if (d3 > d4)
            {
                int temp = d3;
                d3 = d4;
                d4 = temp;
            }
        }
        largestnumber = d4 * 1000 + d3 * 100 + d2 * 10 + d1;
        smallestnumber = d1 * 1000 + d2 * 100 + d3 * 10 + d4;
        orignalnumber = largestnumber - smallestnumber;
        if (smallestnumber < 1000)
        {
            std::cout << "Step " << steps << ": " << largestnumber << " - 0" << smallestnumber << " = " << orignalnumber << endl;
        }
        else
        {

            orignalnumber = largestnumber - smallestnumber;
            std::cout << "Step " << steps << ": " << largestnumber << " - " << smallestnumber << " = " << orignalnumber << endl;
        }
    }
    std::cout << "Reached Kaprekar’s constant in " << steps << " steps." << endl;
    return 0;
}
