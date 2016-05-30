#ifndef SKILL_H
#define SKILL_H

#include "incBase.h"

#ifndef STRING
#define STRING
#include <string>
#endif

#ifndef SSTREAM
#define SSTREAM
#include <sstream>
#endif

enum skill_cond {snothing,starget_dead};

class Skill
{
public:
    Skill();
    virtual ~Skill();
    Round *round ;
    
    
	virtual void display(){};

    virtual skill_cond effect(){};
protected:
private:
};

#endif // SKILL_H
