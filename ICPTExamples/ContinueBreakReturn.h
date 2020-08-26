#pragma once
#include "Base.h"
class ContinueBreakReturn :
    public Base
{
public:
    void main();

private:
    int continueLoop();
    int breakLoopAt(int breakpoint);
    void multipleReturns(int number);
};

