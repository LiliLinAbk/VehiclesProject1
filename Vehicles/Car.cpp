#include "Car.h"

Car::Car(string brand, string model, int year) {
	this->brand = brand;
	this->model = model;
	this->year = year;
}
void Car::display() {
	cout << brand << " " << model<<" " << year << endl;
}
