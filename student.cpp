#include <iostream>

int main() {
   std::string name;
   std::string stuID;
   int hours;
   std::cout <<"Enter your name: ";
   std::cin >>name;
   std::cout <<"Enter your student ID: ";
   std::cin >>stuID;
   std::cout <<"Enter the hours you will study this week: ";
   std::cin >>hours;
   std::cout <<"Welcome, "<<name<<"!"<<std::endl;
   std::cout <<"Student ID:\t"<<stuID<<std::endl;
   std::cout <<"Plannedprogramming time: "<<hours<<" hours"<<std::endl;

    

    return 0;
}