#include <IceCreamItem.h>
#include <sstream>

IceCreamItem::IceCreamItem(std::string size)
{
    if(size == "small")
    {
        price = 3;
        this->size = size;
    } 
    else if (size == "medium")
    {
        price = 5;
        this->size = size;
    } 
    else if (size == "large")
    {
        price = 6.5;
        this->size = size;
    } else 
    {
        throw std::runtime_error("size must be small, medium, or large");
    }
}