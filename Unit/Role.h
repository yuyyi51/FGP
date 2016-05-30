#ifndef ROLE_H
#define ROLE_H

#ifndef incSkill
#define incSkill
#include "Skill/incSkill.h"
#endif

#ifndef IOSTREAM
#define IOSTREAM
#include <iostream>
#endif

#ifndef LIST
#define LIST
#include <list>
#endif

#ifndef VECTOR
#define VECTOR
#include <vector>
#endif

#ifndef STRING
#define STRING
#include<string>
#endif

class Role : public Unit
{
public:
    Role();
    Role(int h,int a,std::string na){Abi = Ability(h,a);cp = role;name = na;};
    virtual ~Role();


    Unit* getEnemy();

    virtual void action();

protected:
private:
};

#endif // ROLE_H
