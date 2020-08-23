#pragma once

#include "ecs.h"

class PhysicsSystem : public System {

public:
    explicit PhysicsSystem() = default;

    void onAddedToWorld(World* world) override {};

    void tick(World* world) override;

    void onRemovedFromWorld(World* world) override {};

    void handleEvent(SDL_Event& event) override {};

private:
};
