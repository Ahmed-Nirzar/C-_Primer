#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item currItem, Item;
    if (std::cin >> currItem) {
        int cnt = 1;
        while (std::cin >> Item) {
            if (Item.isbn() == currItem.isbn())
            ++cnt;
            else {
                std::cout << currItem << " occurs " << cnt << " times" << std::endl;
                currItem = Item;
                cnt = 1;
            }
        }

        std::cout << currItem << " occurs " << cnt << " times" << std::endl;
    }

    return 0;
}