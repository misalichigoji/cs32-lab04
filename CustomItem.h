#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H
#include <map>
#include <string>
#include "IceCreamItem.h"

class CustomItem : public IceCreamItem
{
    public:
        CustomItem(std::string s);
        void addTopping(std::string topping);
        virtual ~CustomItem();
        double getPrice() override;
        virtual std::string composeItem() override;
    private:
        std::map <std::string, int> toppings;
};

#endif