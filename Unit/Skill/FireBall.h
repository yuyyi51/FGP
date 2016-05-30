#ifndef FIREBALL_H
#define FIREBALL_H

#ifndef incBuff
#define incBuff
#include "Buff/incBuff.h"
#endif

class FireBall : public Skill
{
public:
    FireBall(int dam,int Bdam,int r,Unit* t):damage(dam),Buf(new Burning(Bdam,r,t,"»º…’")),target(t){};
    virtual ~FireBall();
    
    virtual void display();
    virtual skill_cond effect();

protected:
private:
    int damage;
    Burning* Buf;
    Unit* target;
};

#endif // FIREBALL_H
