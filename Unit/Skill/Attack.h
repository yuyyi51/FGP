#ifndef ATTACK_H
#define ATTACK_H

#ifndef incBuff
#define incBuff
#include "Buff/incBuff.h"
#endif

#ifndef IOSTREAM
#define IOSTREAM
#include <iostream>
#endif

class Attack : public Skill
{
public:
    Attack(int dam,Unit* t):damage(dam),target(t){};
    virtual ~Attack();

	virtual void display();
    virtual skill_cond effect();

protected:
private:

    int damage;
    Unit* target;
};

#endif // ATTACK_H
