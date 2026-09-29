#include <iostream>
using namespace std;
int main(){
    int n;
    int Counter=0;
    cout<<"Enter a positive integer: ";
    cin>>n;
    bool isPrime;
    for (int i=2;i<=n;i++){
        isPrime=true;
        for(int j=2;j<i;j++){
            if(i%j==0){
                isPrime=false;
                break;
            }}
    if(isPrime==true){
        cout<<i<<endl;
        Counter++;
    }}
    cout<<"Total prime numbers: "<<Counter<<endl;

        
    
    
    









    return 0;}
