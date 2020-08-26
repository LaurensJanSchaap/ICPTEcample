#pragma once
#include <iostream>

class ExampleEvent
{
public:
	__event void action(int value);
};

class ExampleHandler
{
public:
	void handle1(int value);
	void handle2(int value);
	void hookEvents(ExampleEvent* exampleEvent);
	void unhookEvents(ExampleEvent* exampleEvent);
};