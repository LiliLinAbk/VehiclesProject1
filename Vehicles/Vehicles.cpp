#include <iostream>
#include <string>
#include "Car.h"
using namespace std;

int main() {
    
    Car car1("Honda","Civic", 2015);
    Car car2("Honda", "Accord", 2011);
    car1.display();
    car2.display();
   
}