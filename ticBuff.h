#pragma once
#include "baseBuff.h"
class TicBuff :
    public BaseBuff
{
    unsigned char m_tickGap;

    posit* effectTarget;
    int effectVolum;

    TicBuff(int buffIndex, Actor *bindAcotr);
    ~TicBuff();

    bool tick();
    bool effect();

};

