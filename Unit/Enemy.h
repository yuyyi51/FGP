#ifndef ENEMY_H
#define ENEMY_H

#ifndef incSkill
#define incSkill
#include "Skill/incSkill.h"
#endif

#ifndef IOSTREAM
#define IOSTREAM
#include <iostream>
#endif

#ifndef STRING
#define STRING
#include<string>
#endif

class Enemy : public Unit
{
public:
    Enemy();
    Enemy(int h,int a,std::string na){ Abi = Ability(h,a);cp = enemy;name = na;};
    virtual ~Enemy();


    Unit* getRole();

    static bool first;

    virtual void action();

protected:
private:
};

#endif // ENEMY_H
