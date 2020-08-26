#pragma once
#include "Base.h"
#include <thread>
#include <mutex>

class Concurrency :
    public Base
{
public:
    void main();
private:
    std::mutex mtx1;
    std::mutex mtx2;
    void normal();
    void deadlock();
    void task1();
    void task2();
};

