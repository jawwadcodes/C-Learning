#include <iostream>
using namespace std;
int main()
{
    int n, x, count = 0;
    string indices = "";
    cout << "Enter size of the array: ";
    cin >> n;
    int array[100];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "Enter the value to be found in the array: ";
    cin >> x;
    for (int i=0; i < n; i++)
    {
        if (array[i] == x){
            count++;
            indices += to_string(i) + " ";}
        }
    
    cout << "Indices: " << indices << endl;
    cout << "Count: " << count << endl;

    return 0;}
