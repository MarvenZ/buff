#pragma once
#include"actor.h"
#include<vector>

class ActorController
{
public:
    bool newActor(std::string actorName);
    bool deleteActor();

    bool tick();
    bool command(std::string command);

    bool addActor(std::string actorName);

    bool actorAddBuff(int actorID, int buffID);

    std::vector< Actor*> Actors;

};

