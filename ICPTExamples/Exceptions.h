#pragma once
#include "Base.h"
class Exceptions :
    public Base
{
public:
    void main();

private:
    void caughtException();
    void catchAll();
    void catchSpecific();
    void uncaughtException();
    void throwException(int toThrow);
    void throwInt();
    void throwChar();
    void throwBool();
};

