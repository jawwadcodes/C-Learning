#include <iostream>
using namespace std;
int main(){
    double Marks;
    double total;
    double Percentage;
    string Grade;
    for (int i = 1; i <= 5; i++){
        cout<<"Enter marks of Subject "<<i<<": ";
        cin>>Marks;
        total=total + Marks;
        cout<<"Subject "<<i<<" marks: "<<Marks<<endl;}
    Percentage=(total/500.0)*100.0;
    if (Percentage<=100.0 && Percentage>=93.0){
        Grade="A";
    }
    else if (Percentage<=92.0 && Percentage>=87.0){
        Grade="A-";
    }
    else if (Percentage<=86.0 && Percentage>=82.0){
        Grade="B+";
    }
    else if (Percentage<=81.0 && Percentage>=76.0){
        Grade="B";
    }
    else if (Percentage<=76.0 && Percentage>=72.0){
        Grade="B-";
    }
    else if (Percentage<=71.0 && Percentage>=68.0){
        Grade="C+";
    }
    else if (Percentage<=67.0 && Percentage>=64.0){
        Grade="C";
    }
    else if (Percentage<=63.0 && Percentage>=60.0 ){
        Grade="C-";
    }
    else {
        Grade="F";
    }
    cout<<"Total Marks: "<<total<<endl;
    cout<<"Percentage: "<<Percentage<<endl;
    cout<<"Grade: "<<Grade<<endl;







    return 0;
}