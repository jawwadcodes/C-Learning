#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    int num1;
    int num2;
    int result;
    int answer=0;
    int Counter=0;
    srand(time(0));
    num1 = rand()%10+1;
    num2 = rand()%10+1;
    result= num1*num2;
    while (result != answer){
        cout<<num1<<" multiplied by "<<num2<<" is: ";
        cin>>answer;
        Counter+=1;
        if (result==answer){
            cout<<"Correct"<<endl;}
        else{
            cout<<"Fail"<<endl;
            }    }
    cout<<"Attempts: "<<Counter<<endl;













    return 0;
}