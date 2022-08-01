#pragma once
#include <iostream>
using namespace std;

class Car {
private:
	string brand;
	string model;
	int year;
public:
	Car(string brand = "Honda", string model = "Civic", int year = 2015);
	
	void display();
};