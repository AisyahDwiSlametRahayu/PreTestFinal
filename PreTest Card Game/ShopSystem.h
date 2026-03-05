#pragma once
#include <memory>
#include <iostream>
#include "ModifierFactory.h"

class ShopSystem {
public:
    std::shared_ptr<IModifier> openShop();
};
