#ifndef CURE_H
#define CURE_H

#ifndef incBuff
#define incBuff
#include "Buff/incBuff.h"
#endif

#ifndef IOSTREAM
#define IOSTREAM
#include <iostream>
#endif

class Cure : public Skill
{
public:
    Cure(Unit* t):target(t){};
    virtual ~Cure();
    
    virtual void display();
    virtual skill_cond effect();

protected:
private:
    Unit* target;
};

#endif // CURE_H
