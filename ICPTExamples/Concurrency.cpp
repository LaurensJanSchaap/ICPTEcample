#include "Concurrency.h"

void Concurrency::main() {
	normal();
	deadlock();
}

void Concurrency::normal() {
	std::cout << "Noraml flow" << std::endl;
	std::thread thrd3(&Concurrency::task1, this);
	std::thread thrd4(&Concurrency::task2, this);

	thrd3.join();
	thrd4.join();
}

void Concurrency::deadlock() {
	std::thread thrd1(&Concurrency::task1, this);
	std::thread thrd2(&Concurrency::task1, this);

	thrd1.join();
	thrd2.join();
}

void Concurrency::task1() {
	mtx1.lock();
	std::cout << "Locked mtx1" << std::endl;
	mtx2.lock();
	std::cout << "Locked mtx2" << std::endl;
	mtx1.unlock();
	std::cout << "Unlocked mtx1" << std::endl;
	mtx2.unlock();
	std::cout << "Unlocked mtx2" << std::endl;
}

void Concurrency::task2() {
	mtx2.lock();
	std::cout << "Locked mtx2" << std::endl;
	mtx1.lock();
	std::cout << "Locked mtx1" << std::endl;
	mtx2.unlock();
	std::cout << "Unlocked mtx2" << std::endl;
	mtx1.unlock();
	std::cout << "Unlocked mtx1" << std::endl;
}