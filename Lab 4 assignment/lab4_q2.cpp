#include <iostream>
using namespace std;
int main(){
    int n;
    std::string suffix;
    cout<<"Enter a positive integer: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%10==1){
            suffix="st";
            if (i%100==11){
                suffix="th";
            }
        
        }
        else if(i%10==2){
            suffix="nd";
            if(i%100==12){
                suffix="th";
            }
        }
        else if(i%10==3){
            suffix="rd";
            if(i%100==13){
                suffix="th";
            }
        }
        else{
            suffix="th";
        }
        cout<<i<<suffix<<" "<<"Hello"<<endl;

        


    }















    return 0;
}