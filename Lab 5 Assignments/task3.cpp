#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of the array: ";
    cin >> n;

    int arr[100];
    cout<<"Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int Position = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[Position] = arr[i];
            Position++;
        }
    }

    for (int i = Position; i < n; i++) {
        arr[i] = 0;
    }
    cout<<"Modified array: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i != n - 1) cout << " ";
    }
    cout << endl;

    return 0;
}