#include "ActorController.h"
#include<thread>
#include<chrono>
#include<Windows.h>

bool ActorController::newActor(std::string actorName)
{
    Actors.push_back(new Actor(actorName));
    return true;
}

bool ActorController::tick()
{
    
    auto tick = [this]() {
        while (true)
        {
            for (auto actor : Actors)
            {
                actor->tick();
            }
            Sleep(100);
        }    
    };

    std::thread tickThread(tick);
  

    return true;
}

bool ActorController::addActor(std::string actorName)
{
    Actors.push_back(new Actor(actorName, Actors.back()->m_charactorID + 1 ));

    return true;
}

bool ActorController::actorAddBuff(int actorID, int buffID)
{


    return true;
}
