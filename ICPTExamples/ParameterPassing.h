#pragma once
#include "Base.h"
#include <cstdarg>
#include <functional>

class ParameterPassing :
    public Base
{
public:
    void main();
private:
    void common(int, int, int);
    void defaults(int, int = 0,int = 2);
    void arbitrary(int,...);
};

