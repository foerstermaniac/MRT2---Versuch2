#include <iostream>
#include <string>
#include "State.h"
using namespace std;

class Transition {
public:
	const State& start; //Ausgangszustand
	const State& target; //Endzustand
	Transition(const State& start, const State& target) : start(start), target(target) {}
	bool guard() const; //Waechterfunktion
	void effect() const; //Uebergangsverhalten
};
