#include <iostream>
using namespace std;
int main(){
    int Choice=0;
    double balance;
    cout<<"Enter the current balance in your account: ";
    cin>>balance;
    while(Choice!=4){

    
    cout<<"Press 1 to Deposit amount. \nPress 2 to Withdraw amount. \nPress 3 to check balance. \nPress 4 to exit."<<endl;
    cin>>Choice;
    if (Choice==1){
        double deposit;
        cout<<"Enter the amount you want to withdraw: ";
        cin>>deposit;
        balance=balance+deposit;
        cout<<"Amount deposited"<<endl;
    }
    if (Choice==2){
        double withdraw;
        cout<<"Enter the amount you want to withdraw: ";
        cin>>withdraw;
        balance=balance-withdraw;
        cout<<"Amount withdrawed"<<endl;

    }
    if(Choice==3){
        cout<<"Your current balance is: "<<balance<<endl;

    }
}











    return 0;
}