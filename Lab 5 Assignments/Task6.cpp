#include <iostream>
using namespace std;
int main(){
    int n,array[100],d;
    cout<<"Enter the number of students: ";
    cin>>n;
    
    cout<<"Enter their scores: ";
    for(int i=0;i<n;i++){
        cin>>array[i];

    }
    
    cout<<"Enter the maximum difference: ";
    cin>>d;
    int pairs=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int difference=array[i]-array[j];
            if(difference<0){
                difference=-difference;}
            if(difference<=d){
                cout<<"Student "<<i<<" and Student "<<j<<": "<<array[i]<<","<<array[j]<<endl;
                pairs++;
            }
        }
    }
    if(pairs==0){
        cout<<"No suitable pairs"<<endl;}
    cout<<"Pairs: "<<pairs<<endl;




















    return 0;
}