#include "Events.h"

void ExampleHandler::handle1(int value) {
	std::cout << "Hanle1 with value " << value << std::endl;
}

void ExampleHandler::handle2(int value) {
	std::cout << "Hanle2 with value " << value << std::endl;
}

void ExampleHandler::hookEvents(ExampleEvent* exampleEvent) {
	__hook(ExampleEvent::action, exampleEvent, &handle1);
	__hook(ExampleEvent::action, exampleEvent, &handle2);
}

void ExampleHandler::unhookEvents(ExampleEvent* exampleEvent) {
	__unhook(ExampleEvent::action, exampleEvent, &handle1);
	__unhook(ExampleEvent::action, exampleEvent, &handle2);
}