#include <iostream>
using namespace std;
int main(){
    int n;
    int array1[100], array2[100];
    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the first array: ";
    for(int i=0; i<n; i++){
        cin>>array1[i];
    }
     array2[0] = array1[0];
    for(int i=1; i<n; i++){
        array2[i] = array2[i-1]+array1[i];
    }
    cout<<"Orignal array: ";
    for(int i=0; i<n; i++){
        cout<<array1[i]<<" ";
}
    cout<<endl;
    cout<<"Running totals: ";
    for(int i=0; i<n; i++){
        cout<<array2[i]<<" "<<endl; }

    return 0;
}