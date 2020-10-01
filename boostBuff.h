#pragma once
#include "baseBuff.h"
#include"actor.h"

class BoostBuff :
    public BaseBuff
{
 
    bool tick();
 
    BoostBuff(int buffIndex, Actor * bindActor);
    ~BoostBuff();

};
