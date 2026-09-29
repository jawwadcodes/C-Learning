#include <iostream>
using namespace std;

int main() {
    int n, k;
    string array[100], lastname;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    cout << "Rotations: ";
    cin >> k;

    if (n == 1) {
        cout << "After rotation: " << array[0] << endl;
    } else {
        for (int i = 0; i < k; i++) {
            lastname = array[n - 1];

            for (int j = n - 1; j > 0; j--) {
                array[j] = array[j - 1];
            }

            array[0] = lastname;

            cout << "After rotation " << (i + 1) << ": ";
            for (int m = 0; m < n; m++) {
                cout << array[m];
                if (m != n - 1) cout << " ";
            }
            cout << endl;
        }
    }

    return 0;
}