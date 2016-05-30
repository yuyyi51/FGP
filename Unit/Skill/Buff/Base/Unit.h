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
	
//位置信息
/*
    int locX;
    int locY;
*/


//属性
    Ability Abi;
    std::string name;
    enum camp cp;


//这个函数决定角色干什么
    virtual void action(){};
    
//判断角色是否死亡
	bool isDead(); 

//技能用的接口
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
