#include <iostream>
using namespace std;
int main()
{
    int amount;
    int notes_100;
    int notes_50;
    int notes_10;
    int coins_1;
    int remaining;
    cout << "Please enter an amount in rupees: ";
    cin>>amount;
    notes_100 = amount/100;
    remaining = amount%100;
    notes_50 = remaining/50;
    remaining = remaining%50;
    notes_10 = remaining/10;
    remaining = remaining%10;
    coins_1 = remaining/1;
    remaining = remaining%1;
    cout << "Hundred rupees notes:" << notes_100 << endl;
    cout << "Fifty rupees notes:" << notes_50 << endl;
    cout << "Ten rupees notes:" << notes_10 << endl;
    cout << "One rupees coins:" << coins_1 << endl;
    return 0;
}