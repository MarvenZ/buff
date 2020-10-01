#pragma once

#include<string>

#include"actor.h"

typedef unsigned int posit;
typedef unsigned short s_posit;

enum buffType{ Beneficial, Harmful, Neutral };

class BaseBuff
{

public:

    Actor* m_bindActor;

    int m_buffIndex;

    std::string m_buffName;

    std::string m_buffDiscription;

    int m_duaration;

    int m_timer;

    buffType buffType;

};

