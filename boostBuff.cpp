#include "boostBuff.h"

BoostBuff::BoostBuff(int buffIndex, Actor * bindActor)
{

    if (buffIndex == 1)
    {
        m_buffIndex = 1;

        m_buffName = "Slow down";

        m_buffDiscription = "Decrease 20% of speed, last for 10 second.";

        m_duaration = 100;

        m_timer = 0;

        buffType = Harmful;

       // bindActor->

    }

}

BoostBuff::~BoostBuff()
{
}
