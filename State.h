#include <iostream>
#include <string>
using namespace std;

class State {
	friend inline ostream& operator<<(ostream& lhs, State& rhs);
	friend inline ostream& operator<<(ostream& lhs, const State& rhs);
private:
	const string id; //Identifier
public:
	State(const string& id) : id(id) {}; //Konstruktor
	// Warum wird hier referenziert übergeben? Wohin?

	void enter() const; //Verhalten Eintritt
	void stay() const; //Verhalten Aufenthalt
	void exit() const; //Verhalten Ausgang
	const string& getID(); //Zugriff auf Identifier
};
