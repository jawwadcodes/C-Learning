#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
    
    
    bool appeared[7]={};
    const int item=6;
    int rolls=0;
    int distinct=0;
    srand(time(0));
    cout<<"Rolls: ";
    while(distinct<item){
        int value=rand()%6+1;
        rolls++;
        cout<<value<<" ";
        if(!appeared[value]){
            distinct++;
            appeared[value]=true;}

    }
    cout<<"\n";
    cout<<"All six faces collected after: "<<rolls<<endl;
    int total=0;
    for(int i=0;i<10000;i++){
        bool appeared[7]={};
    const int item=6;
    int rolls=0;
    int distinct=0;
    
    
    while(distinct<item){
        int value=rand()%6+1;
        rolls++;
        
        if(!appeared[value]){
            distinct++;
            appeared[value]=true;}

    }
    total+=rolls;

    }
    cout<<"Average rolls: "<<total/10000.0<<endl;












    return 0;



}
