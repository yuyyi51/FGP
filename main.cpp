#ifndef IOSTREAM
#define IOSTREAM
#include <iostream>
#endif

#ifndef incUnit
#define incUnit
#include "Unit\incUnit.h"
#endif

int main()
{
    
	Round::getRound()->UnitList.push_back(new Role(80,20,"player"));
    
	Round::getRound()->UnitList.push_back(new Enemy(100,10,"enemy"));



    while(Round::getRound()->effect()){}

    return 0;
}
