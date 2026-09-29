#include <iostream>
using namespace std;
int main(){
    int Due_Days;
    int Fine;
    cout<<"Enter the number of days over due date: ";
    cin>>Due_Days;
    if (Due_Days==0){
        Fine=100;
        cout<<"Your outstanding fine: "<<Fine<<endl;
    }
    else if(Due_Days>0 && Due_Days<=5){
        Fine= Due_Days*10 + 100;
        cout<<"Your outstanding fine: "<<Fine<<endl;
    }
    else if(Due_Days>5 && Due_Days<=10){
        Fine= Due_Days*20 +100;
        cout<<"Your outstanding fine: "<<Fine<<endl;}
    
    else if(Due_Days>10){
        Fine= Due_Days*30 +100;
        cout<<"Your outstanding fine: "<<Fine<<endl;}
    
    else{
        cout<<"Invalid Input";
    }
   





    return 0;
}