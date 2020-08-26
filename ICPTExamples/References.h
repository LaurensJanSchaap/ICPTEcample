#pragma once
#include "Base.h"
class References :
    public Base
{
public:
    void main();
private:
    void passByValue(int x);
    void passByRefference(int *x);
};

