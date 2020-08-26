#include "EventHandling.h"

void EventHandling::main() {
	ExampleEvent exampleEvent;
	ExampleHandler exampleHandler;

	std::cout << "Start" << std::endl;
	exampleHandler.hookEvents(&exampleEvent);
	exampleEvent.action(90);
	exampleHandler.unhookEvents(&exampleEvent);
}