#ifndef MOB_H
#define MOB_H
#include "Inventory.h"

class Mob
{
    public:
        Mob();
        virtual ~Mob();

    protected:

    private:
        Inventory inventory;

};

#endif // MOB_H
