#pragma once

#include<string>
#include<vector>

#include"boostBuff.h"
#include"ticBuff.h"


class Actor
{
    posit m_charactorID;

    std::string m_charaName;

    posit m_health;
    posit m_mana;
    posit m_Exp;
    posit m_speed;

    posit m_maxHealth;
    posit m_maxMana;
    posit m_maxExp;

    s_posit m_healthGetBuff;
    s_posit m_manaGetBuff;
    s_posit m_ExpGetBuff;

    std::vector< TicBuff*> ticBuff;
    std::vector< BoostBuff*>  boostBuff;

    Actor(std::string Name,posit ID);
    ~Actor();

    bool addBuff();

    friend class BoostBuff;
    friend class TicBuff;   
    friend class ActorController;
    friend class baseBuff;
};

