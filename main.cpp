#include <iostream>
#include <string>
using namespace std;
#include "Transition.h"

inline ostream& operator<<(ostream& lhs, State& rhs){
	return lhs << rhs.id;
}
inline ostream& operator<<(ostream& lhs, const State& rhs){
	return lhs << rhs.id;
}

// states
State ar("ar"), ll("ll"), lg("lg"), rl("rl"), rg("rg");
// transitions
Transition t[] = {
	Transition(ar, ll),
	Transition(ll, lg),
	Transition(lg, rl),
	Transition(ar, rl),
	Transition(rl, rg),
	Transition(rg, ll)
};

int main (){
	return 0;
}
