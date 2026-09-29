#include <iostream>
using namespace std;

int main(){
    string sequence="";
    int Count;
    cout<<"Enter a positive integer: ";
    cin>>Count;
    while(Count!=1){
        sequence=sequence+" "+to_string(Count);
        if(Count%2==0){
            Count=Count/2;
        }
        else{
            Count=Count*3+1;
        }
    }
    cout<<"Sequence: "<<sequence<<endl;









    return 0;

}