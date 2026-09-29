//Syed Jawwad Hasnain Zaidi (35750) CSE_141
#include <iostream>
using namespace std;
int main(){
    int  n;
    bool valid=false;
    while (valid==false){
    cout<<"Enter grid size: ";
    cin>>n;
    if (n<3||n>15){
        cout<<"Grid size must be an odd integer between 3 to 15.Please try again"<<endl;}
    else if (n%2==0){
        cout<<"Grid size must be an odd integer.Please try again"<<endl;
    }
    else{
        valid=true;
    }
    }
    int value;
    int centre=(n)/2;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
           int x=i-centre;
           int y=j-centre;
           if (x<0){
            x=-x;
           }
           if (y<0){
            y=-y;
           }
           
        cout<<x+y<<" ";

        }
       cout<<endl;
    }
   
























    return 0;
}