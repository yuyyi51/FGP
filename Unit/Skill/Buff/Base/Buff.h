#ifndef BUFF_H
#define BUFF_H

#ifndef STRING
#define STRING
#include<string>
#endif

#include "incBase.h"

class Unit ;

enum Buff_type {Buf,DeB,CBuf,CDeB};
enum Buff_Cond {bnothing,bBuff_end,btarget_dead};

class Buff
{
public:


    Buff();
    virtual ~Buff();

	virtual void display();
    virtual Buff_Cond effect();

    enum Buff_type BufTyp;

    unsigned long targetID;
    std::string name ;
    std::string effectStart ;
    std::string effectContinue ;
    std::string effectEnd ;
    Round *round ;

protected:
private:
	

};

#endif // BUFF_H
