#ifndef ITEMSTACK_H
#define ITEMSTACK_H
#include "Item.h"

class ItemStack
{
    public:
        ItemStack();
        virtual ~ItemStack();

    protected:

    private:
        Item item;
        int amt;
};

#endif // ITEMSTACK_H
