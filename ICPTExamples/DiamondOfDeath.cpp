#include "DiamondOfDeath.h"

void Boat::inWater() {
	std::cout << "Im floating" << std::endl;
};

void Boat::onLand() {
	std::cout << "Im stuck" << std::endl;
};

void Boat::printEngine() {
	std::cout << "I have a waterproof engine" << std::endl;
};

void Car::inWater() {
	std::cout << "Engine drowned" << std::endl;
};

void Car::onLand() {
	std::cout << "Im comfy" << std::endl;
};

void Car::printWheelCount() {
	std::cout << "I have 4 wheels" << std::endl;
};

void Hybrid::inWater() {
	Boat::inWater();
};

void Hybrid::onLand() {
	Car::onLand();
};

void DiamondOfDeath::main() {
	Car car;
	Boat boat;
	Hybrid hybrid;

	std::vector<Vehicle*> vehicles;
	vehicles.push_back(&car);
	vehicles.push_back(&boat);
	vehicles.push_back(&hybrid);

	for (int i = 0; i < vehicles.size(); i++) {
		Vehicle* vehicle = vehicles[i];
		vehicle->inWater();
		vehicle->onLand();
		std::cout << "\n\n";
	}

	hybrid.printWheelCount();
	hybrid.printEngine();
}
