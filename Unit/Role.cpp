#include "Role.h"

Role::Role()
{
    //ctor
}


Role::~Role()
{
    //dtor
}

Unit* Role::getEnemy()
{
    //��д֧��ѡ�������� 
	std::vector<Unit*> enemy_list; //����˵���ʱvector 
    for(std::list<Unit*>::iterator i=Round::getRound()->UnitList.begin();i!=Round::getRound()->UnitList.end();i++)
    {
        if((*i)->cp == enemy)
        {
        	enemy_list.push_back(*i);
        	
		} 
        
    }
    
    if(enemy_list.begin() == enemy_list.end()) return NULL;
	
	
	std::cout << "Type number to select enemy." << std::endl;
	int enemy_num = 1;
	for(std::vector<Unit*>::iterator i=enemy_list.begin();i!=enemy_list.end();i++)
	{
		std::cout << enemy_num++ << " for " << (*i)->name << std::endl;
	}
	std::cin >> enemy_num;
	return *(enemy_list.begin() + --enemy_num);
}

void Role::action()
{
	int cho ;
	do
	{
		system("cls") ;
		std::cout << name << " ��ʣ����ֵ��" << Abi.health << std::endl ;
    	std::cout << "��ѡ���ж���" << std::endl;
    	for( int i = 1 ; i <= SklList.size() ; ++i )
    	{
    		std::cout << i << "." << SklList[i-1] << std::endl ;
		}
		std::cin >> cho ;
	}while( cho > SklList.size() )
	
}
