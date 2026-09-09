#include <iostream>

int main() {
    double a;
    double b;
    std::cout <<"Enter the value of 'a': ";
    std::cin >>a;
    std::cout <<"Enter the value of 'b': ";
    std::cin >>b;
    double result1 = a*a - b*b;
    double result2 = (a-b)*(a+b);
    std::cout <<"The result for a²-b² is :"<< result1<<std::endl;
    std::cout <<"The result for (a-b)(a+b) is :"<< result2<<std::endl;
    

    return 0;
}