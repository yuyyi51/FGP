#include "Attack.h"


Attack::~Attack()
{
    //dtor
}

skill_cond Attack::effect()
{
    display();
    target->Abi.health -= damage;
    if(target->is_dead())
    	return starget_dead;
    return snothing;
}
