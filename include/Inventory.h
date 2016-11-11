#ifndef INVENTORY_H
#define INVENTORY_H
#include "ItemStack.h"
#include <vector>

class Inventory
{
    public:
        Inventory();
        virtual ~Inventory();

    protected:

    private:
        std::vector<ItemStack> itemStackList;
};

#endif // INVENTORY_H
