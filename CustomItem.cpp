#include "IceCreamItem.h"
#include "CustomItem.h"
#include <string>
#include <iomanip>
#include <sstream>

CustomItem::CustomItem(std::string s) : IceCreamItem(s){}

void CustomItem::addTopping(std::string topping)
{
    toppings[topping]++;
    price += 0.4;
}

CustomItem::~CustomItem()
{

}
double CustomItem::getPrice()
{
    return price;
}
std::string CustomItem::composeItem()
{
    std::string composition = "Custom Size: " + size + "\nToppings:\n";
    for (auto const& x : toppings)
    {
        std::string nextLine = x.first + ": " + std::to_string(x.second) + " oz\n";
        composition += nextLine;
    }
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(2) << price;
    composition += "Price: $" + oss.str() + "\n";
    return composition;
}