#include "tickBuff.h"

TickBuff::TickBuff(int buffIndex , Actor* bindActor)
{
    if (buffIndex == 101)
    {
        m_bindActor = bindActor;

        m_buffIndex = 101;

        m_buffName = "basic heal";

        m_buffDiscription = "Increase 5hp per second, last for 6 second.";

        m_duaration = 61;

        m_timer = 0;

        m_tickGap = 10;

        buffType = Beneficial;

        effectTarget = m_bindActor->m_health;

    }
}

TickBuff::~TickBuff()
{
}

bool TickBuff::tick()
{
    if (m_timer <= m_duaration)
    {
        m_timer++;
    }
    else
    {
        this->~TickBuff();
    }

    if (m_timer % m_tickGap == 0)
    {
        effect();
    }

}
