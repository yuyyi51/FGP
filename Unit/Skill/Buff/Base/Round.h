#ifndef ROUND_H
#define ROUND_H

#ifndef LIST
#define LIST
#include <list>
#endif

#ifndef QUEUE
#define QUEUE
#include <queue>
#endif

#include "incBase.h"

#ifndef IOSTREAM
#define IOSTREAM
#include <iostream>
#endif

#ifndef STRING
#define STRING
#include <string>
#endif

#include "tool.h"

class Round
{
public:
    static Round* getRound(){return ins;};
    void Destroy() {delete this;};
//Unit֮����queueװ���ټӸ������ж����ĺ������ж���ԽСԽ���ж�
//priority_queue
    std::list<Unit*> UnitList;
    std::queue<std::string> messageList ;
    void AddRole(Unit *);
    void AddEnemy(Unit *);
    
    virtual bool effect();
protected:
private:
	int role_num;
	int enemy_num;
	
    static Round* ins;
    Round(){role_num = 0;enemy_num = 0;};
    virtual ~Round();
};

#endif // ROUND_H
