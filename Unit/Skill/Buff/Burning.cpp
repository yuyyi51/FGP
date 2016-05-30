#include "Burning.h"




Burning::~Burning()
{
    //dtor
}

Buff_Cond Burning::effect()
{
    round->messageList.push( effectContinue ) ;
    target->Abi.health -= damage;
    --round ;
    if( round > 0 )
    return bnothing ;
    round->messageList.push( effectEnd ) ;
    return bBuff_end;
}
