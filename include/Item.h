#ifndef ITEM_H
#define ITEM_H
#include <string>

//Note to future self, use a virtual function to get item use menu.

class Item
{
    public:
        Item();
        virtual ~Item();

        std::string getName() { return name; }
        void setName(std::string name) { this->name = name; }

        std::string getDesc() { return desc; }
        void setDesc(std::string desc) { this->desc = desc; }

        double getValue() { return value; }
        void setValue(double value) { this->value = value; }

    protected:

    private:
        //Item Name
        std::string name;
        //Item Description
        std::string desc;
        //Item Value
        double value;

};

class Weapon : public Item
{
    public:

    private:
        //Damage Value
        double damageValue;
};

class Armor : public Item
{
    public:

    private:
        //Armor Value
        double armorValue;
};
#endif // ITEM_H
