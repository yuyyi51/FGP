#include "Heal.h"


Heal::Heal( int p , Unit *t ):potency(p),target(t) {

}

Heal::~Heal() {

}

void Heal::display() {
	std::cout << "healed " << target->name <<", and recoverd " << potency << " health." << std::endl ;
}

skill_cond Heal::effect() {
	display();
	target->Abi.health += potency ;
	return snothing;
}
