#include "Round.h"



Round::~Round()
{
    //dtor
}

Round* Round::ins = new Round();

void Round::AddRole(Unit* t)
{
	getRound()->UnitList.push_back(t);
	role_num++;
}

void Round::AddEnemy(Unit* t)
{
	getRound()->UnitList.push_back(t);
	enemy_num++;
}

bool Round::effect()
{
    for(std::list<Unit*>::iterator i=UnitList.begin();i!=UnitList.end();i++)
    {
    	for( std::list<Buff*>::iterator j = (*i)->BufList.begin() ; j != (*i)->BufList.end() ; j++ )
    	{
    		//写判断目标是否死亡
    		//目测要预留变量 
    		//std::cout << 1 << std::endl;
        	if((*j)->effect() == bBuff_end)
        	{
           		//std::cout << 2 << std::endl;
           		delete (*j) ;
            	j = BufList.erase(j);
        	}
        	 
		}
		while( !messageList.empty() )
		{
			std::cout << messageList.pop() ;
			wait(1) ;
		}
        (*i)->action();
        
        
        if(role_num = 0)
        {
        	std::cout << "Player fall." << std::endl;
			return false;
		}
            
		if(enemy_num = 0)
        {
        	std::cout << "Enemy fall." << std::endl;
			return false;
		}
           
    }
    return true;

}
