#pragma once
#include "Base.h"
class StatementLevel :
    public Base
{
public:
    void main();
private:
    void ifStatement();
    void switchStatement();
    void forLoop();
    void whileLoop();
    void unconditional();
};

