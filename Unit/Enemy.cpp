#include "Enemy.h"

Enemy::Enemy()
{
    //ctor
}

Enemy::~Enemy()
{
    //dtor
}

Unit* Enemy::getRole()
{
    //���������������дѡ�����
    for(std::list<Unit*>::iterator i=Round::getRound()->UnitList.begin();i!=Round::getRound()->UnitList.end();i++)
    {
        if((*i)->cp == role)
            return *i;
    }
}

bool Enemy::first = true;

void Enemy::action()
{
    std::cout << "Monster have " << Abi.health << " now." << std::endl;
    if(first)
    {
        std::cout << "Monster ";
        FireBall(Abi.atk*2,10,3,getRole()).effect();//�Ȱ�Buring���˺��ͳ���ʱ�����ɹ̶���
        first = false;
    }
    else
    {
        std::cout << "Monster ";
        Attack(Abi.atk,getRole()).effect();
    }

}
