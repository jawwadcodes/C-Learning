#include <iostream>
using namespace std;

int main(){
    string sequence="";
    int num1=0;
    int num2=1;
    int sum;
    int n;
    cout<<"Enter the number of values of the sequence: ";
    cin>>n;
    for(int i=0; i<n; i++ ){
        sum=num1+num2;
        sequence=sequence +" "+ to_string(num1)+" ";
        num1=num2;
        num2=sum;


    }
    cout<<"Sequence: "<<sequence<<endl;

}