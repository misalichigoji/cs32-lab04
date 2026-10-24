#include <string>
#include <iomanip>
#include <sstream>
#include "IceCreamItem.h"
#include "PreMadeItem.h"

using namespace std;

PreMadeItem::PreMadeItem(string n, string s) : IceCreamItem(s), name(n)
{
    price++;
}
PreMadeItem::~PreMadeItem()
{
}
double PreMadeItem::getPrice()
{
    return price;
}
string PreMadeItem::composeItem()
{
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(2) << price;
    string result = "Pre-made Size: " + size + "\n" +
                    "Pre-made Item: " + name + "\n" +
                    "Price: $" + oss.str() + "\n";
    return result;
}