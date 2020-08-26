#pragma once
#include "Base.h"
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <string>

class Functional :
    public Base
{
public:
    void main();
private:
    void lambdas();
    void tailRecursion();
    void higherOrder();
    void transform();
    void remove_if();
    void accumulate();
};

