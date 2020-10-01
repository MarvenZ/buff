#pragma once
#include "baseBuff.h"
#include"actor.h"

class TickBuff :
    public BaseBuff
{
    unsigned char m_tickGap;

    posit* effectTarget;
    int effectVolum;

    TickBuff(int buffIndex, Actor *bindAcotr);
    ~TickBuff();

    bool tick();
    bool effect();

};

