#include "Cure.h"


Cure::~Cure()
{
    //dtor
}

void Cure::display()
{
	std::cout << target->name << " was cured." << std::endl;
}

skill_cond Cure::effect()
{
    for(std::list<Buff*>::iterator i=target->BufList.begin();i!=target->BufList.end();i++)
    {
        if((*i)->targetID == target->getNum() && (*i)->BufTyp == DeB)
        {
            display();
            delete (*i) ;
            i = target->BufList.erase(i);
        }
    }
    return snothing;
}
