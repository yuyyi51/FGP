#ifndef HEAL_H
#define HEAL_H

#ifndef incBuff
#define incBuff
#include "Buff/incBuff.h"
#endif

#ifndef IOSTREAM
#define IOSTREAM
#include <iostream>
#endif

class Heal : public Skill
{
public:
	Heal( int , Unit* ) ;
	virtual ~Heal() ;
	
	virtual void display();
	virtual skill_cond effect() ;
	
private:
	int potency ;
	Unit *target ;
};

#endif
