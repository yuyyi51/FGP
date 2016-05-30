#include "Unit.h"

unsigned long Unit::Number = 0;

Unit::Unit()
{
    //ctor

    ID_num = Number++;


    Abi = Ability(0,0);
}

Unit::~Unit()
{
    //dtor
}

unsigned long Unit::getNum()const
{
    return ID_num;
}

bool Unit::isDead()
{
	if(Abi.health <= 0) 
	{
		return true;
	}
	return false;
}





void Unit::gainDamage( int d )
{
	std::string o ;
	std::stringstream out ;
	Abi.health -= d ;
	if( Abi.health < 0 )
	Abi.health = 0 ;
	out << name << "受到了" << d << "点伤害，余剩" << Abi.health << "点生命值。" << std::endl ;
	o = out.str() ;
	round->messageList.push(o) ;
}

void Unit::gainBuff( Buff* buf )
{
	std::string o ;
	std::stringstream out ;
	BufList.push_back( buf ) ;
	out << name << buf->effectStart << std::endl ;
	o = out.str() ;
	round->messageList.push(o) ;
}

void Unit::earseBuff( Buff_type t )
{
	std::string o ;
	std::stringstream out ;
	for( std::list<Buff*>::iterator i = BufList.begin() ; i != BufList.end() ; ++i )
	{
		if( (*i)->BufTyp == t )
		{
			out << (*i)->name << "被移除了" << std::endl ;
			delete (*i) ;
			i = BufList.erase( i ) ;
		}
	}
	o = out.str() ;
	round->messageList.push(o) ;
}

void Unit::earseBuffAll()
{
	std::string o ;
	std::stringstream out ;
	for( std::list<Buff*>::iterator i = BufList.begin() ; i != BufList.end() ; ++i )
	{
		out << (*i)->name << "被移除了" << std::endl ;
		delete (*i) ;
		i = BufList.erase( i ) ;
	}
	o = out.str() ;
	round->messageList.push(o) ;
}

void Unit::suddenDeath()
{
	std::string o ;
	std::stringstream out ;
	out << name << "受到即死攻击。" << std::endl ;
	o = out.str() ;
	Abi.health = 0 ;
	round->messageList.push(o) ;
}


