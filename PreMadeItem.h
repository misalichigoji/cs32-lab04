#ifndef PREMADEITEM_H
#define PREMADEITEM_H
#include <string>
#include "IceCreamItem.h"

class PreMadeItem : public IceCreamItem
{
    public:
        PreMadeItem(std::string n, std::string s);
        virtual ~PreMadeItem();
        double getPrice() override;
        virtual std::string composeItem() override;
    private:
        std::string name;
};

#endif