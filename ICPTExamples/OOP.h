#pragma once
#include "Base.h"

class OOP :
    public Base
{
public:
	void main();
};


class Human {
public:
	Human();
	class Eyes {
	public:
		Eyes(char color, int sight);
		char color;
	private:
		int sight;
	};

	Eyes* eyes;
	void infect();
	void heal();
private:
	class TapeWorm {
	public:
		char name[9] = "Parasite";
	};
	TapeWorm* worm;
};