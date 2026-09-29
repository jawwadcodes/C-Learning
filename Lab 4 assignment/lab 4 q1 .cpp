#include <iostream>
using namespace std;
int main(){

int n;
string outstring="";
cout<<"Enter an odd integer: ";
cin>>n;
int half=(n+1)/2;
for(int uprows=0;uprows<half;uprows++){
    int spaces=half-uprows;
    int stars=uprows+1;
    for(int i=0;i<spaces;i++){
        cout<< " ";
        }
    for(int j=0;j<(stars*2)-1;j++){
        cout<< "*";
    }
 cout<<"\n";}
 for(int downrow=half-1;downrow>0;downrow--){
    int spaces=half-downrow;
    int stars=downrow;
    for(int i=0;i<=spaces;i++){
        cout<< " ";
        }
    for(int j=0;j<(stars*2)-1;j++){
        cout<< "*";}
    cout<<"\n";


 }
  












    return 0;
}