#include "ShopSystem.h"

std::shared_ptr<IModifier> ShopSystem::openShop() {
    std::cout << "\n=== SHOP ===\n";
    std::cout << "1. Double Score\n";
    std::cout << "2. +50 Bonus\n";
    std::cout << "3. Square Score\n";
    std::cout << "Choose (0 to skip): ";

    int choice;
    std::cin >> choice;

    if (choice == 0)
        return nullptr;

    return ModifierFactory::createModifier(choice);
}