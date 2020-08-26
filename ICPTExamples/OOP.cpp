#include "OOP.h"

Human::Human() {
	eyes = new Eyes('b', 0);
}

Human::Eyes::Eyes(char color, int sight) :color(color), sight(sight) {}

void Human::infect() {
	if (worm == NULL) {
		worm = new TapeWorm;
		std::cout << "Aquired a " << worm->name << std::endl;
	}
	else {
		std::cout << "Already infected" << std::endl;
	}
}

void Human::heal() {
	if (worm != NULL) {
		worm = NULL;
	}
	else {
		std::cout << "Already healed" << std::endl;
	}
}

void OOP::main() {
	Human human;
	//Human::TapeWorm tapeWorm;
	human.heal();
	human.infect();
	human.infect();
	human.heal();
	Human::Eyes newEyes('r',2);
}
