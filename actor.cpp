#include "actor.h"

Actor::Actor(std::string Name,posit charactorId) :
    m_charactorID(charactorId),
    m_charaName(Name),
    m_health(15),
    m_mana(100),
    m_Exp(0),
    m_maxHealth(100),
    m_maxMana(100),
    m_maxExp(30),
    m_healthGetBuff(10000),
    m_manaGetBuff(10000),
    m_ExpGetBuff(10000)   
{

}

Actor::~Actor()
{
}

