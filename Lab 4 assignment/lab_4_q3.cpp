#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a positive integer: ";
    cin>>n;
    for (int a=0;a<=n;a++){
        for(int b=a;b<=n;b++){
            for(int c=b;c<=n;c++){
                if (((a*a)+(b*b)+(c*c))==n ){
                    cout<<"("<<a<<","<<b<<","<<c<<")"<<endl;
                }
            }

    }




}









    return 0;
}