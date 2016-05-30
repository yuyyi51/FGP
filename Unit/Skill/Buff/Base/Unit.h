#ifndef UNIT_H
#define UNIT_H

#include "incBase.h"

#ifndef STRING
#define STRING
#include <string>
#endif

#ifndef SSTREAM
#define SSTREAM
#include <sstream>
#endif

#ifndef LIST
#define LIST
#include <list>
#endif

#ifndef IOSTREAM
#define IOSTREAM
#include <iostream>
#endif

enum camp{role ,enemy};

class Unit
{
public:
    Unit();
    virtual ~Unit();

//ID
    static unsigned long Number;
    unsigned long getNum() const;
	std::list<Buff*> BufList ;
	std::vector<Skill*> SklList ;
	Round *round ;
	
//λ����Ϣ
/*
    int locX;
    int locY;
*/


//����
    Ability Abi;
    std::string name;
    enum camp cp;


//�������������ɫ��ʲô
    virtual void action(){};
    
//�жϽ�ɫ�Ƿ�����
	bool isDead(); 

//�����õĽӿ�
	void useSkill( int ) ;
	void gainDamage( int ) ;
	void gainBuff( Buff* ) ;
	void earseBuff( Buff_type ) ;
	void earseBuffAll() ;
	void suddenDeath() ;
	//void suddenDeath( Unit* ) ;
	
protected:

private:
    unsigned long ID_num;
	
};

#endif // UNIT_H
