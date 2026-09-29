#include <iostream>
using namespace std;
#include <string>
int main()
{
    int decimal;
    string Binary="",Hexa="",Octa="";
    cout<<"Enter a number in decimal: ";
    cin>>decimal;
    int quotient=decimal;
    while(quotient!=0){
        
        if(quotient%2==0){
            Binary= "0"+Binary;}
        else {
            Binary="1"+Binary;
        }
        quotient=quotient/2;
    }
    quotient=decimal;
    while(quotient!=0){
        int digit=quotient%8;
        Octa=to_string(digit)+Octa;
        quotient=quotient/8;
    }
    quotient=decimal;
    string character;
    while(quotient!=0){
        
        int digit=quotient%16;
        switch(digit){
            case 10:
                character='A';
                break;
             case 11:
                character='B';
                break;
             case 12:
                character='C';
                break;
             case 13:
                character='D';
                break;
             case 14:
                character='E';
                break;
             case 15:
                character='F';
                break;
            default:
                character=to_string(digit);
                break;
        }
            
        
        Hexa=character+Hexa;
        quotient=quotient/16;}
    
    cout<<"Hexadecimal: "<<Hexa<<endl;
    cout<<"Octal: "<<Octa<<endl;
    cout<<"Binary: "<<Binary<<endl;


    return 0;}





