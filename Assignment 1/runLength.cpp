//Syed Jawwad Hasnain Zaidi (35750) CSE_141
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int current, count = 0, total = 0, entries = 0;
    int value;
    string compressed="";
    cout<<"Enter a value. -1 to exit.: ";cin >> value;cout<<" ";

    if (value == -1) {
        cout << "Stream is empty." << endl;
        return 0;
    }

    current = value;
    count = 1;
    total = 1;

    while (cin >> value && value != -1) {
        total++;
        if (value == current) {
            count++;
        } else {
            compressed=compressed+ "[" + to_string(count)+ "x" + to_string(current) + "] ";
            entries++;
            current = value;
            count = 1;
        }
    }

   
    compressed=compressed+ "[" + to_string(count) + "x" + to_string(current) + "]";
    entries++;
    cout<<compressed<<endl;
   

    double reduction = 100.0 * (total - entries) / total;

    cout << "Total values read: " << total << endl;
    cout << "Compressed entries: " << entries << endl;
    cout << "Percentage reduction: " <<fixed<<setprecision(2)<< reduction  << "%"<<endl;

    return 0;
}