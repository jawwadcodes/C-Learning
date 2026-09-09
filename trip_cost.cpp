#include <iostream>

int main() {
    double distancekm;
    double fuelefficiency;
    double fuelprice;
    std::cout << "Enter the distance of trip in kilometers: ";
    std::cin >> distancekm;
    std::cout << "Enter the Vehicle's fuel efficiency in kilometers per litre: ";
    std::cin >> fuelefficiency;
    std::cout << "Enter the price of the fuel per litre: ";
    std::cin >> fuelprice;
    double litresrequired = distancekm/fuelefficiency;
    double totalcost = litresrequired*fuelprice;
    std::cout << "Litres of fuel required: " << litresrequired<<std::endl;
    std::cout << "Total cost: " << totalcost <<std::endl;




    // Write C++ code here
    
    return 0;
}