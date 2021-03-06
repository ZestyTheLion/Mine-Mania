#pragma once
#include <List>
#include "Position.h"

class Display;

class TileChangeManager
{
    public:
        TileChangeManager();
        virtual ~TileChangeManager();
        void update();
        void push_back(Position pos);
    protected:

    private:
        std::list<Position> Changes;
};
