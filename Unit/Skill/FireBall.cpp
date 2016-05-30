#include "FireBall.h"




FireBall::~FireBall()
{
    //dtor
}

void FireBall::display()
{
	std::cout << "attacked " << target->name <<" by fireball, and caused " << damage << " health lose." << std::endl;
}

skill_cond FireBall::effect()
{
    display();

    target->Abi.health -= damage;
    //

    //这里写一个把一个Burning 添加到BufList的函数
    /*Buff *bu = new Buff ;
    *bu = Buf ;*/
    target->BufList.push_back(Buf);
    
    if(target->is_dead()) return starget_dead;
    return snothing;

}
