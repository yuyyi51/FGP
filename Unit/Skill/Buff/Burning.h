#ifndef BURNING_H
#define BURNING_H

#ifndef incBase
#define incBase
#include "Base\incBase.h"
#endif

#ifndef IOSTREAM
#define IOSTREAM
#include <iostream>
#endif



class Burning : public Buff
{
public:
    Burning(int d,int r,Unit* t,std::string n):damage(d),round(r),target(t){name = n ;BufTyp = DeB;targetID = t->getNum();};

    virtual ~Burning();
    
    
	
	//具体效果
	virtual void display();
    virtual Buff_Cond effect();


    Unit* target;

protected:
private:

    int damage;
    int rounds;
};

#endif // BURNING_H
